#include <iostream>
#include "keisan.h"

int main() {
    Keisan k;
    k.a = 5;
    k.b = 3;
    std::cout << "Sum: " << k.add() << std::endl;
    return 0;
}
