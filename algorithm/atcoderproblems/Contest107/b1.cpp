#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    ll H = 0, W = 0;

    cin >> H >> W;
    vvchar table(H,vchar(W,'.'));

    //入力
    for(ll i = 0; i < H; i++){
        for(ll j = 0; j < W; j++){
            cin >> table.at(i).at(j);
        }
    }
    // 実装
    // 条件１：行が . のみの場合は削除する。
    vvchar filtered_rows;
    for(ll i = 0; i < H; i++){
        bool all_dot = true;
        for(ll j = 0; j < W; j++){
            if(table.at(i).at(j) != '.'){
                all_dot = false;
                break;
            }
        }
        //filtered_rowsにデータを格納する
        if(!all_dot){
            vchar row;
            for(ll j = 0; j < table.at(i).size(); j++){
                row.push_back(table.at(i).at(j));
            }
            filtered_rows.push_back(row);
        }
    }

    if(filtered_rows.size() == 0){
        // 全部消えたら出力せずに終了
        return 0;
    }

    // 条件２：列が . のみの場合は削除する。
    ll new_H = filtered_rows.size();
    ll new_W = filtered_rows.at(0).size();
    vector<bool> keep_col(new_W, false);
    //列に・以外のデータにflagを立てる
    for(ll j = 0; j < new_W; j++){
        for(ll i = 0; i < new_H; i++){
            if(filtered_rows.at(i).at(j) != '.'){
                keep_col.at(j) = true;
                break;
            }
        }
    }
    
    vvchar new_table;
    //行テーブルに列を追加する
    for(ll i = 0; i < new_H; i++){
        vchar row;
        for(ll j = 0; j < new_W; j++){
            //フラグを立てられた列データを入れる
            if(keep_col.at(j)){
                row.push_back(filtered_rows.at(i).at(j));
            }
        }
        new_table.push_back(row);
    }
    //出力
    for(ll i = 0; i < new_table.size(); i++){
        for(ll j = 0; j < new_table.at(i).size(); j++){
            cout << new_table.at(i).at(j);
        }
        cout << endl;
    }
}