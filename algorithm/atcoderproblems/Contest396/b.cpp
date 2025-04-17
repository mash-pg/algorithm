#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<int> stack(100, 0); 
    string op;
    int x;

    while (Q--) {
        cin >> op;
        if (op == "1") {
            cin >> x;
            stack.push_back(x);
        } else if (op == "2") {
            cout << stack.back() << endl;
            stack.pop_back();
        }
    }

    return 0;
}

