#include <iostream>
#include <string>

int main() {
    std::string s, p;
    std::cin >> s >> p;

    std::string ring = s + s;  // 円環に対応するために2倍にする

    if (ring.find(p) != std::string::npos) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
