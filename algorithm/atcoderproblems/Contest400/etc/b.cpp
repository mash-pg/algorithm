#include <iostream>
using namespace std;
//powerは、べき乗
//sumは、和
long long SumGeometricProgression(int N, int M) {
    if (M == 0) return 1;

    long long sum = SumGeometricProgression(N, M - 1);
    if (sum > 1e9) return 1e9 + 1;

    long long power = 1;
    for (int i = 0; i < M; ++i) {
        if (power > 1e9 / N) return 1e9 + 1; // 乗算でオーバー
        power *= N;
    }

    if (sum > 1e9 - power) return 1e9 + 1; // 加算でオーバー

    return sum + power;
}

int main() {
    int N, M;
    cin >> N >> M;

    long long result = SumGeometricProgression(N, M);

    if (result > 1e9) {
        cout << "inf" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
