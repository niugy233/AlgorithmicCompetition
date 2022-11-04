#include <iostream>
using namespace std;

long long binarypow(long long a,long long b){
    
    if(b == 0){
        return 1;
    }
    long long limit = 1000000000;
    long long num = binarypow(a,b/2);
    if(num == -1 || num == limit)
        return -1;
    if(b % 2 == 1){
        return a * num * num;
    }
    else{
        return num * num;
    }
}
int main(){
    long long a,b;
    cin >> a >> b;
    long long ans = binarypow(a,b);
    if(ans > 1000000000){
        cout << -1;
    }
    else{
        cout << ans;
    }
}