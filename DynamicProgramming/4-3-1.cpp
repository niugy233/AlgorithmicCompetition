/* 
    深度搜索未完成
    BFS
*/


#include <iostream>
#include <queue>
using namespace std;

int Weight,High;
char room[20][20];
int location[2]; // x,y
int dir[4][2] = {{-1,0},{1,0},{0,1},{0,-1}}; // x,y
struct node{
    int x,y;
};
int nums; //数量
bool check(int x,int y){if(x <= Weight && y <= High){return true; } return false;}

void BFS(int Weight,int High){
    
    queue<node> sit;
    struct node start,next;
    start.x = location[0];
    start.y = location[1];
    next = start; //结构体可以直接赋值
    sit.push(start);
    while(sit.empty()){
        for(int i = 0;i<4;i++){
            next.x += dir[i][0];
            next.y += dir[i][1];
            if(room[next.x][next.y] == '.' && check(next.x,next.y)){
                sit.push(next);
                break; //直接退出循环 深度搜索
            }
        }
    }
}
int main(){
    for(int i = 0;i<High;i++){
        for(int j = 0;j < Weight;j++){
            cin >> room[i][j];
            if(room[i][j] =='@'){
                location[0] = i;
                location[1] = j;
            }
        }
    }
}