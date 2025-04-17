#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long sum = 0;
    long long term = 1;

    for (int i = 0; i <= M; ++i) {
        sum += term;
        if (sum > 1e9) {
            cout << "inf" << endl;
            return 0;
        }

        // これ以上掛けると10^9を超える可能性がある
        if (i != M && term > 1e9 / N) {
            cout << "inf" << endl;
            return 0;
        }

        term *= N;
    }

    cout << sum << endl;
    return 0;
}
