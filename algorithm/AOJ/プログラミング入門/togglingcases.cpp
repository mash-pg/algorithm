#include<iostream>
#include<cctype>
#include<stdio.h>

using namespace std;

int main(){

    char ch;
    while (1)
    {
        scanf("%c",&ch);
        if(islower(ch)){
            ch = (char)toupper(ch);
        }else if( isupper(ch)){
            ch = (char)tolower(ch);
        }
        printf("%c",ch);
        if(ch == '\n'){
            break;
        }
    }
    return 0;
}
