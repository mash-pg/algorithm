int main(){
    int ans = 0;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            ans += i;
        } else {
            ans -= i;
        }
    }    
}