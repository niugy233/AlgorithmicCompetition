#include <iostream>
using namespace std;


int n,pos;
int depth;
int val[1001]; //记录路径上的所有结果

//判断是否需要剪枝
bool Judge(int now){ //now是记录当前深度的数据
    int nums = now - depth;
    int value = 0;
    // 对其进行指数增长
    if(val[pos] << nums < n){
        return true;
    }
    else{
        return false;
    }
}
bool ida(int now){
    if(now > depth){
        return false;
    }
    if(Judge(now)){
        return false;
    }
    if(val[pos] == n){
        return true;
    }
    pos++;
    for(int i = 0;i<pos;i++){
        val[pos] = val[pos-1] + val[i];
        if(ida(now+1)){
            return true;
        }
        val[pos] = val[pos-1] - val[i];
        if(ida(now+1)){
            return true;
        }
    }
    pos--;
    return false;


}
int main(){
     while(cin >> n && n){
        for(depth = 0;;depth++){
            int pos = 0;
            val[pos] = 1;
            ida(pos);
        }
     }
}