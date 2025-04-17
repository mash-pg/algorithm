#!/bin/bash
# Usage: ./auto_compile_submit_watch.sh <problem_url> <code_file>

PROBLEM_URL="$1"
CODE_FILE="$2"

# contest名の抽出
CONTEST=$(echo "$PROBLEM_URL" | cut -d'/' -f5)

# testディレクトリを削除
if [ -d "test" ]; then
    echo "🧹 test/ フォルダを削除します..."
    rm -rf test/
fi

# サンプルケースを取得
echo "📥 サンプルをダウンロード中..."
oj d "$PROBLEM_URL"
if [ $? -ne 0 ]; then
    echo -e "\\033[1;31m❌ サンプルの取得に失敗しました\\033[0m"
    exit 1
fi

# コンパイル
echo "⚙️ C++ コードをコンパイル中..."
g++ -std=c++17 -Wall -O2 "$CODE_FILE" -o a.out
if [ $? -ne 0 ]; then
    echo -e "\\033[1;31m❌ コンパイルエラー\\033[0m"
    exit 1
fi

# テスト
echo "🧪 テストを実行中..."
oj test -c ./a.out
if [ $? -ne 0 ]; then
    echo -e "\\033[1;31m❌ テスト失敗。提出しません。\\033[0m"
    exit 1
fi

# 提出
echo -e "\\033[1;32m🎉 テスト成功！提出します...\\033[0m"
oj submit "$PROBLEM_URL" "$CODE_FILE" --yes --no-open > submission_log.txt 2>&1

# submission_log.txt から提出URLを抽出して変数に代入
SUBMIT_URL=$(grep -oP 'result:\s*\Khttps://atcoder.jp/contests/.*/submissions/[0-9]+' submission_log.txt)

# 変数の中身を表示
echo "提出URL: $SUBMIT_URL"
echo -e "\\033[1;36m📨 提出完了！URL: $SUBMIT_URL\\033[0m"
echo -n "⏳ 判定待ち: "

# 判定ループ
echo -n "⏳ 判定待ち: "
FINAL_STATUSES=("AC" "WA" "TLE" "RE" "CE" "MLE" "OLE" "QLE" "IE" "RE" "WR")

COUNT=0
while true; do
    STATUS=$(curl -s "$SUBMIT_URL" | grep -oP '<td id="judge-status".*?<span[^>]*>.*?</span>' | sed -E 's/.*<span[^>]*>(.*?)<\/span>.*/\1/')

    COUNT=$((COUNT + 1))

    if [[ " ${FINAL_STATUSES[@]} " =~ " ${STATUS} " ]]; then
        echo ""
        echo -e "\n✅ 判定完了: \033[1;35m$STATUS\033[0m"
        break
    else
        echo -ne "\r⏳ 判定待ち: $STATUS ($COUNT 回目)"
    fi

    sleep 2
done
