#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;


//ただの逆順
int main(){
    int n;
    int num;
    vector<vector<int>> card(4, vector<int>(13, 0));
    char c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c >> num;
        if(c == 'S') card.at(0).at(num-1)++;
        else if(c == 'H') card.at(1).at(num-1)++;
        else if(c == 'C') card.at(2).at(num-1)++;
        else if(c == 'D') card.at(3).at(num-1)++;
    }

    for (int i = 0; i < 4; i++)
    {
		if(i == 0)      c = 'S';
		else if(i == 1) c = 'H';
		else if(i == 2) c = 'C';
		else if(i == 3) c = 'D';
		//足りないカードの出す（スペードの4が足りない）
        //解答例（S 4）
        //配列の中に各カードの1~13でないものを出力する
		for(int j=0;j<13;j++){
			if(card.at(i).at(j) == 0){
				cout<<c<<" "<<j+1<<endl;
			}
		}    
    }
    

    
    return 0;
    
}