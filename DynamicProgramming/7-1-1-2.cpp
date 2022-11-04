#include <iostream>
using namespace std;

int main(){
    int sumMoney,valueNum;
    cin >> sumMoney >> valueNum;
    int type[valueNum];
    int dp[100][sumMoney];
    for(int i = 0;i<100;i++){
        for(int j = 0;j<sumMoney;j++){
            dp[i][j] = 0;
        }
    }//初始化
    dp[0][0] = 1; 

    for(int i = 0;i<valueNum;i++){
        for(int j = 0;j<100;j++){
            for(int k = type[i];k<sumMoney;k++){
                dp[j][k] = dp[j][k] + dp[j-1][k-type[i]];
            }
        } 
}