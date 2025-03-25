#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vvl matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    ll rows = matrix.size();
    ll cols = matrix[0].size();
    vvl transposed(cols,vl(rows));
    for(ll i = 0; i < rows;++i)
        for(ll j = 0; j < cols; ++j)
            transposed[j][i] = matrix[i][j];
    cout << "転置行列：" << endl;
    for(const auto &row : transposed){
        for(ll num : row){
            cout << num << " ";
        }
        cout << endl;
    }
        
    return 0;

}