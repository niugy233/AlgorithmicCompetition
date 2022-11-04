#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

//确实可以形成一个相对的二维数组
int col[12] = {0}; //用一维数组记录皇后安放位置，在第i行j列放皇后
int tot;//记录可行的方法
int n;

bool check(int c,int r){
    for(int i= 0;i<r;i++){
        if(col[i] == c || (abs(col[i] - c) == abs(i-r)))
            return false;
        return true;
    }
}

void DFS(int r){
    if(r == n){
        tot++;
        return ;
    }

    for(int c = 0;c< n;c++){
        if(check(c,r)){
            col[c] = r;
            DFS(r+1);
        }
    }
}
int main(){
    int ans[12] = {0};
    for(int i = 0;i<12;i++){
        memset(col,0,sizeof(col));
        tot = 0;
        ans[i] = tot;
    }

    while(cin >> n){
        if(n == 0)
            return ;
        cout << ans[n] << endl;
    }   
}
