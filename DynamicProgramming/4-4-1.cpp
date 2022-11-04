#include <iostream>
using namespace std;


int n;
int dir[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int Start_x,Start_y; //记录初始位置
char Map[10][10];


bool check(int x,int y){if(x<n && x >= 0 && y < n && y >= 0) return true; else return false;}

  
int DFS(int location_x,int location_y){

    for(int i = 0;i<4;i++){
        if(check(location_x + dir[i][0],location_y + dir[i][1]) && Map[location_x + dir[i][0]][location_y + dir[i][1]] == '.'){                         
            location_x += dir[i][0];
            location_y += dir[i][1];
            DFS(location_x,location_y);
        }
    }                      
    return 1;
}
int main(){
    cin >> n;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> Map[i][j];
            if(Map[i][j] == '@'){
                Start_x = i;
                Start_y = j;
            }    
        }
    }
}