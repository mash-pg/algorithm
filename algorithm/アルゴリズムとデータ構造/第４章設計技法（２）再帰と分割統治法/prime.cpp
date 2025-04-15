#include "/home/mash/projects/algorithm/include/template.hpp"


int main(){
    int prime;
    int n;
    cin >> n;
    vector<int> prime_list;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            prime_list.push_back(i);
            for(int j = i * 2; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    cout << "素数リスト" << endl;   
    for(int i = 0; i < prime_list.size(); i++){
        cout << prime_list[i] << " ";
    }
    cout << endl;
    cout << "素数の個数" << endl;
    cout << prime_list.size() << endl;
    cout << "素数の最大値" << endl;
    cout << prime_list[prime_list.size() - 1] << endl;
    cout << "素数の最小値" << endl;
    cout << prime_list[0] << endl;
    cout << "素数の平均値" << endl;
    double sum = 0;
    for(int i = 0; i < prime_list.size(); i++){
        sum += prime_list[i];
    }
    cout << sum / prime_list.size() << endl;
    cout << "素数の中央値" << endl;
    if(prime_list.size() % 2 == 0){
        cout << (prime_list[prime_list.size() / 2 - 1] + prime_list[prime_list.size() / 2]) / 2.0 << endl;
    }else{
        cout << prime_list[prime_list.size() / 2] << endl;
    }
    cout << "素数の分散" << endl;
    double variance = 0;
    for(int i = 0; i < prime_list.size(); i++){
        variance += (prime_list[i] - sum / prime_list.size()) * (prime_list[i] - sum / prime_list.size());
    }
    cout << variance / prime_list.size() << endl;
    cout << "素数の標準偏差" << endl;
}