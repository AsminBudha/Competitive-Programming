#include <iostream>

using namespace std;
class node;
class node{
    int data;
    node right=null;
    node left=null;
    public node(int data){
        this.data=data;
    }
};
void insert(node root,node node){
    if(root==null){
        root=node;
    }
    else if(node.data<root.data){
        insert(root.left,node);
    }
    else if(node.data>=root.data){
        insert(root.right,node);
    }
}
void traverse(node root){
    if(root!=null){
        cout<<root.data<<"  ";
        traverse(root.left);
        traverse(root.right);
    }
}
int main()
{
    node bst=null;
    int arr[]={10,3,11,13,5};
    for(int i=0;i<5;i++){
        insert(bst,new node(arr[i]));
    }
    traverse(bst);
    return 0;
}
