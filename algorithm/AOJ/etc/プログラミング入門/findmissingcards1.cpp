#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	int num;
	int card[4][13] = {0};
	char c;
	cin>>n;

	//手持ちカード振り分け
	for (int i = 0; i < n; i++)
	{
		cin >> c >> num;
		if(c == 'S') card[0][num-1]++;
		if(c == 'H') card[1][num-1]++;
		if(c == 'C') card[2][num-1]++;
		if(c == 'D') card[3][num-1]++;
	}

	for (int i = 0; i < 4; i++)
	{
		if(i == 0) c ='S';
		if(i == 1) c ='H';
		if(i == 2) c ='C';
		if(i == 3) c ='D';

		for (int j = 0; j < 13; j++)
		{
			if(card[i][j] == 0) cout << c << " " << j+1 << endl;
		}
		
	}	
	return 0;
}