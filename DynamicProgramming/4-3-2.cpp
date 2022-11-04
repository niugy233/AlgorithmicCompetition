#include <queue>
#include <iostream>
using namespace std;
#define LEN 362880
struct node{
    int state[9];
    int dis; // diatance 距离
};
\
//定义开始以及目标状态
struct node start;
struct node targect;
int visited[LEN];
int dir[4][2] = {{-1.0},{0,-1},{1,0},{0,1}}; //方向direction
//康顿展开智能获取数量而不能获取全排列的具体数据
//验重
long int factory[] = {1,1,2,6,24,120,720,5040,40320,362880}; // 分别对应1！2！3！4！ .....

bool Cantor(int str[],int num){
    int result = 0;
    for(int i = 0;i<num;i++){
        int counted;
        for(int j = i+1;j<num;j++){
            if(str[i] > str[j]){
                counted++;
            }
            result += counted * factory[num-i-1];
        }
    }

    if(!visited[result]){
        visited[result] = 1;
        return true;
    }
    else{
        return 0;
    }
}

//只需要得出距离就行了
int BFS(){
    // 起始状态
    struct node head;
    memcpy(head.state,start.state,sizeof(head.state);//复制起始状态
    queue<node> q;
    q.push(head);

    while(q.empty()){
        head = q.front();
        q.pop();

        for(int i = 0;i<4;i++){
            
        }
    }
}
int main(){
    for(int i = 0;i<9;i++){
        cin >> start.state[i];
    } 
    for(int i = 0;i<9;i++){
        cin >> targect.state[i];
    }
}