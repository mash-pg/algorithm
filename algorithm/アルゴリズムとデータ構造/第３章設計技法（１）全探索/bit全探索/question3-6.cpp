#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    int K,N;
    cin >> K >> N;
    
    for(int bit = 0; bit < (1 << N); bit++){
        int sum = 0;
            for(int i = 0; i < N; i++){
                if(bit & (1 << i)){
                    sum += 1;
                }
            }
            if(sum == K){
                cout << bit << endl;
            }
    }
    return 0;
}

