#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Money[n];
    for(int i = 0;i<n;i++){
        cin >> Money[i];
    }
    int sunMoney;
    cin >> sunMoney;
    int Min[sunMoney+1];
    int dp[sunMoney + 1];

    for(int i = 0;i<n;i++){
        for(int j = Money[i];j<sunMoney;j++){
            Min[j] = min(Min[j],Min[i-Money[i]] + Money[0]);
            dp[j] = dp[j] + dp[j-Money[i]];
        }
    }    
}