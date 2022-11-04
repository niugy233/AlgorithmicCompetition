#include <iostream>
using namespace std;

const int N = 1010;
int pre[N],post[N],in[N];
int pos[N];
int k = 0;

struct node {
    int value;
    node * left;
    node * right;
};
void node_init(struct node * part){
    part->left = NULL;
    part->right = NULL;
    part->value = 0;
}

// l和r限定可范围 
void build_tree(int l,int r,int * t,struct node * Node){
    int flag = -1;
    for(int i = 0;i<r;i++){
        if(in[i] == pre[*t]){
            flag = i;
            break;
        }
    }
    Node = new node;
    Node->value = flag;
    if(flag = -1) return;
    if(flag > l) build_tree(l,flag + 1,t,Node->left); //左边的结点
    if(flag < r) build_tree(flag-1,r,t,Node->right);// 右边的结点
}

void preorder(node * root){
    if(root == NULL){
        return;
    }
    pos[k++] = root->value;
    preorder(root->left);
    preorder(root->right);
}
//左儿子，父节点，                                                                                                                                                                                                                                                                                                                                              
void inorder(node * root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    pos[k++] = root->value;
    inorder(root->right);
}
 //左儿子 右儿子 父节点
void postorder(node * root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    pos[k++] = root->value;
}


int main(){
    // 用两个数组接收先序遍历和中序遍历
    int n;
    int num = 2;
    cin >> n; //接收有多少个结点
    for(int i = 0;i<n;i++){
        cin >> pre[i]; //先序
    }
    for(int i = 0;i<n;i++){
        cin >> in[N]; //中序
    }
}