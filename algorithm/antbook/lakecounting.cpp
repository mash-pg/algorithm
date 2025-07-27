#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>

using namespace std;

const long long MAX_N = 100;
char field[MAX_N][MAX_N +1];
int N,M;

//深さ優先探索（DFS）を行う巻子
// 指定された座標 (x, y) から連結するすべての 'W' を探索し、'.' に変更します。
void dfs(int x,int y){
    // 現在いるマス (x, y) を陸地ではない '.' に変更し、訪問済みとマークします。
    field[x][y] = '.';
    // 現在のマス (x, y) の周囲8方向（自分自身を含む3x3の範囲）を調べます。
    for(int dx = -1; dx <= 1;dx++){// x座標（行）の探索範囲を -1（上）, 0（同じ行）, 1（下）に設定
        for(int dy = -1; dy <= 1; dy++){// y座標（列）の探索範囲を -1（左）, 0（同じ列）, 1（右）に設定
            // 次の探索候補の座標 (nx, ny) を計算します。
            int nx = x + dx;
            int ny = y + dy;
            //次の座標が以下の３つの条件をすべて満たすかを確認します。
            /**
             * １．グリッドの有効な行の範囲内か(0 <= nx < N) 範囲外の確認10しかないのに11以上のところを見ようとしているなど
             * ２．グリッドの有効な列の範囲内か(0 <= ny < M) 範囲外の確認
             * ３．そのますがまだ訪れていない陸地（Ｗ）であるか(field[nx][ny] == 'W')
            */
            if(0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W'){
                dfs(nx,ny);
            }
        }
    }
    return;
}

int main(){
    // 見つけた陸地の塊（島）の数をカウントする変数。0で初期化します。
    int res = 0;
    // ユーザーからグリッドの行数 (N) と列数 (M) を読み込みます。
    cin >> N >> M;
    // N行分のグリッドデータを読み込みます。
    // 各行は文字列として読み込まれ、field配列の対応する行に格納されます。
    for (int i = 0; i < N; i++) {
        cin >> field[i];
    }
    // グリッドの全マスを走査します。
    for(int i = 0;i < N;i++){ //各行についてのループ
        for(int j = 0; j < M;j++){//各列についてのループ
            //もし現在のます（i,j）が陸地（ｗ）をである場合
            if(field[i][j] == 'W'){
                //新しい陸地の塊（島）を見つけました。
                //この陸地から深さ優先探索を開始し、連結するすべてのＷを '.' に変えて「訪問済み」とマークします。
                dfs(i,j);
                //1つの陸地の塊を数え終えたので、結果のカウンターを１増やします。
                res++;
            }
        }
    }
    cout << res << endl;

    return 0;
}