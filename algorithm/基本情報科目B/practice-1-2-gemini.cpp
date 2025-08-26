#include <iostream>

void calcX(int inData){
    int num = inData;
    std::cout << "calcX : " << std::endl;
    for(int i = 1;i <= 4;i++){
        std::cout << num << " ";
        num = num + 2 * i;
    }
    std::cout << std::endl;
}
void calcY(int inData){
    int num = inData;
    std::cout << "calcY : " << std::endl;
    for(int i = 2;i <= 8; i += 2){
        std::cout << num << " ";
        num = num + 2 * i;
    }
    std::cout << std::endl;
}

int main(){
    int inData;
    std::cin >> inData;

    calcX(inData);
    calcY(inData);

    return 0;
}
