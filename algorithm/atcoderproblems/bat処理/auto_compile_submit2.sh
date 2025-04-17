#!/bin/bash
# Usage: ./auto_compile_submit_watch.sh <problem_url> <code_file>

PROBLEM_URL="$1"
CODE_FILE="$2"

CONTEST=$(echo "$PROBLEM_URL" | cut -d'/' -f5)
PROBLEM=$(echo "$PROBLEM_URL" | cut -d'/' -f7)

# Remove test directory if exists
if [ -d "test" ]; then
    echo "🧹 test/ フォルダを削除します..."
    rm -rf test/
fi

echo "📥 サンプルをダウンロード中..."
oj d "$PROBLEM_URL"
if [ $? -ne 0 ]; then
    echo -e "\033[1;31m❌ サンプルの取得に失敗しました\033[0m"
    exit 1
fi

echo "⚙️ C++ コードをコンパイル中..."
g++ -std=c++17 -Wall -O2 "$CODE_FILE" -o a.out
if [ $? -ne 0 ]; then
    echo -e "\033[1;31m❌ コンパイルエラー\033[0m"
    exit 1
fi

echo "🧪 テストを実行中..."
oj test -c ./a.out
if [ $? -ne 0 ]; then
    echo -e "\033[1;31m❌ テスト失敗。提出しません。\033[0m"
    exit 1
fi

echo -e "\033[1;32m🎉 テスト成功！提出します...\033[0m"
oj submit "$PROBLEM_URL" "$CODE_FILE" --yes --no-open > submit_log.txt
sleep 2

echo "⏳ 提出を確認しています..."

# Get current timestamp
NOW=$(date +%s)

# Fetch submission list page
HTML=$(curl -sL "https://atcoder.jp/contests/$CONTEST/submissions/me")

# Find the most recent submission (within 5 minutes)
SUBMIT_ID=$(echo "$HTML" | grep -oP '/contests/'"$CONTEST"'/submissions/\d+' | head -n 1)

if [ -z "$SUBMIT_ID" ]; then
    echo -e "\033[1;31m⚠️ 提出IDが取得できませんでした\033[0m"
    exit 1
fi

SUBMIT_URL="https://atcoder.jp$SUBMIT_ID"
echo -e "\033[1;36m📨 提出完了！URL: $SUBMIT_URL\033[0m"

echo -n "⏳ 判定待ち: "
while true; do
    STATUS=$(curl -s "$SUBMIT_URL" | grep -oP '<span class="label[^>]*>.*?</span>' | head -1 | sed -e 's/<[^>]*>//g')
    if [[ "$STATUS" == "WJ" || "$STATUS" == "Judging" || "$STATUS" == "" ]]; then
        echo -n "."
    else
        echo ""
        echo -e "\n✅ 判定完了: \033[1;35m$STATUS\033[0m"
        break
    fi
    sleep 2
done
