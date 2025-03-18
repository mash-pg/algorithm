#include <iostream>
using namespace std;

int main() {
	int r, c, sum, acc;
	int table[100 + 1][100 + 1] = {};
    cin >> r >> c;

    acc = 0;
	for (int i = 0; i < r; i++) {
		sum = 0;
		for (int j = 0; j < c; j++) {
            cin >> table[i][j];
			sum += table[i][j];
			table[r][j] += table[i][j];
		}
		table[i][c] = sum;
		acc += sum;
	}
	
	table[r][c] = acc;
	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c; j++) {
			cout << table[i][j] << " ";
		}
		cout << table[i][c] << endl;
	}

    return 0;
}
