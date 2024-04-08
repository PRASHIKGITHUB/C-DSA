#include<bits/stdc++.h> 
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    root->left=buildTree(root->left);
    root->right=buildTree(root->right);

}
using namespace std;
void takeInput(){
    int data;
    cin>>data;
    while(data!=-1){
        
    }
}
int main(){
    return 0;
}