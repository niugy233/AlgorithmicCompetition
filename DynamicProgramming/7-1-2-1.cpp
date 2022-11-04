// 最长公共子序列



#include <iostream>
#include <cstring>
using namespace std;

void LCS(){
    string s1,s2;
    cin >> s1 >> s2;
    int dp[1001][1001];
    memset(dp,0,sizeof(dp));

    for(int i = 1;i <= s1.length();i++){
        for(int j = 1;j <= s2.length();j++){
            if(s2[j-1] == s1[i-1]){
                dp[i][j] = dp[i-1][j-1]; //两个都不不包括
            }
            else {
                dp[i][j] =  max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }                
}

int main(){
    LCS();
}