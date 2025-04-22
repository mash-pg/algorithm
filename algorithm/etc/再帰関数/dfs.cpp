#include "/home/mash/projects/algorithm/include/template.hpp"

int H = 3, W = 3;
vector<string> grid = {
    "S..",
    "##.",
    "..G"
};

vector<vector<bool>> visited(H, vector<bool>(W, false));
//移動方向（上(y)、下(y)、左(x)、右(x)）
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

bool goal_reached = false;
void dfs(int x, int y) {
    // 目標に到達した場合
    if (grid[y][x] == 'G') {
        goal_reached = true;
        return;
    }


    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(ny < 0 || ny >= H || nx < 0 || nx >= W)  continue; 
        if(grid[ny][nx] == '#' || visited[ny][nx]) continue; 

        dfs(nx, ny);
    }
}

   

int main(){
 
    // スタート位置を探す
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (grid[y][x] == 'S') {
                dfs(y, x);
            }
        }
    }

    cout << (goal_reached ? "YES" : "NO") << endl;

    return 0;
    
}