#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max = 1;
    int min = 1;
    int middle = 1;
    if(!(a == b == c)){
        if(a > b && a > c){
            max = a;
        }
        if(a < b && c < a || a < c && b < a){
            middle = a;
        }
        if(a < b && a < c){
            min = a;
        }

        if(b > a && b > c){
            max = b;
        }
        if(b < c && a < b || b < a && c < b){
            middle = b;
        }
        if(b < a && b < a){
            min = b;
        }

        if(c > b && c > a){
            max = c;
        }
        if(c < b && a < c || c < a && b < c){
            middle = c;
        }
        if(c < b && c < a){
            min = c;
        }
        if(a == b){

            if(a > b && a > c){
                max = a;
            }
            if(a < b && a < c){
                min = a;
            }
            cout << a << " " << a << " "  << c<< endl;
        }else if(b == c){
            if(b > a && b > c){
                max = b;
            }
            if(b < a && b < a){
                min = b;
            }
            cout << b << " " << b << " "  << a << endl;
        }else if(c == a){

            if(c > b && c > a){
                max = c;
            }
            if(c < b && c < a){
                min = c;
            }
            cout << c << " " << c << " "  << b<< endl;
        }else{
            cout << min << " " << middle << " " << max << endl;
        }
    }else{
        cout << a << " " << b << " " << b << endl;
    }

}