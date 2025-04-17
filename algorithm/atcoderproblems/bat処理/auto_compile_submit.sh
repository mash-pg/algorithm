#!/bin/bash
# Usage: ./auto_compile_submit.sh <problem_url> <code_file>

PROBLEM_URL="$1"
CODE_FILE="$2"

# Extract contest ID and problem ID from URL
CONTEST=$(echo "$PROBLEM_URL" | cut -d'/' -f5)
PROBLEM=$(echo "$PROBLEM_URL" | cut -d'/' -f7)

# Step 1: Delete old test cases if they exist
if [ -d "test" ]; then
    echo "🧹 test/ フォルダを削除します..."
    rm -rf test/
fi

# Step 2: Download sample cases
echo "📥 サンプルをダウンロード中..."
oj d "$PROBLEM_URL"

# Step 3: Compile the code
echo "⚙️ C++ コードをコンパイル中..."
g++ -std=c++17 -Wall -O2 -o a.out "$CODE_FILE"
if [ $? -ne 0 ]; then
    echo "❌ コンパイルエラー。提出は中止します。"
    exit 1
fi

# Step 4: Run tests
echo "🧪 テストケースを実行中..."
oj test -c ./a.out

# Step 5: Submit if test passed
if [ $? -eq 0 ]; then
    echo "✅ テスト成功 → 提出します..."
    oj submit "$PROBLEM_URL" "$CODE_FILE"
else
    echo "🛑 テスト失敗 → 提出しません。"
fi
