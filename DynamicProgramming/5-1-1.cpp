#include <iostream>
using namespace std;

const int MAX = 1050;

int High[MAX];
int S[MAX];

//并查集初始化
void init_set(){
    for(int i  = 0;i<MAX;i++){
        S[i] = i;
        High[i] = 0; //初始高度是0
    }
}

int find_set1(int x){
    return S[x] == x ? x : find_set(x);
}
// 路径压缩
// 递归有可能爆栈因为所有数据都会临时存在与栈中
// 防止爆栈可以用迭代
int find_set(int x){
    if(x != S[x]) S[x] = find_set(x);
    return S[x];
}
void union_set(int x,int y){
    x = find_set(x);
    y = find_set(y);
    if(High[x] == High[y]){
        High[x] = High[y] + 1;
        S[y] = x;
    }
    else{
        if(High[x] < High[y]){
            S[x] = y; //此时High[x]的高度不用变
        }
        else{
            S[y] = x; //此时High[y]的高度不用变
        }
    }
    // if(x != y) S[x] = S[y];
}
int main(){
    int n,m; ///n个人，m个关系
    cin >> n >> m; //共n个人
    init_set();
    for(int i = 0;i<m;i++){
        int x,y;
        cin >> x >> y;
        union_set(x,y);
    }

    int ans;
    for(int i = 1;i<n;i++){
        if(S[i] = i){
            ans++;
        }
    }
    cout << ans;
}