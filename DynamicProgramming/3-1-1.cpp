#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> table; //因为是一个动态数组不需要指定长度
    table.clear();
    int pos = 0;
    for(int i = 0;i<2*n;i++){
        table.push_back(i);
    }
    for(int i = 0;i<n;i++){
        pos = (pos+m) % table.size();
        table.erase(table.begin() + pos);
    }

    // 输出
    int j; //记录table中好人的位置
    for(int i = 0;i<2*n;i++){
        if(i == n-1) cout << endl;
        if(i == table[j] && j < table.size()){
            j++;
            cout << "G";
        }
        else {
            cout << "B";
        }
    }

}