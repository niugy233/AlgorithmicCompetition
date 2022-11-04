#include <iostream>
#include <algorithm>
using namespace std;
/*
    用stl求全部序列
 */ 
// int main(){
//     int data[4] = {5,3,1,4};
//     sort(data,data+4);
//     do {
//         for(int i = 0;i<4;i++){
//             cout << data[i];
//         }
//     }while(next_permutation(data,data+4));
//     return 0;
// }

// 循环求数组全排列
int nums[7] = {1,2,3,4,5};
int num = 0;
void Prem(int nums[],int left,int right){
    if(left == right){
        for(int i = 0;i<=right;i++){
            cout << nums[i] << " ";

        }
        num++;
        cout << endl << num << endl;
    }
    // 不是很直观，这个是递推的过程
    for(int i = left;i<=right;i++){
       swap(nums[left],nums[i]);
       Prem(nums,left+1,right);
       swap(nums[left],nums[i]); 
    }
}
int main(){
    Prem(nums,0,4);
}

