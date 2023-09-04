//BST or not:-
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node *left,*right;
};

struct node * newnode(int d){
    struct node *nn=malloc(sizeof(struct node));
    nn->data=d;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}
bool BST(struct node *root){
    if(root==NULL){
        return true;
    }
    if(root->left!=NULL && root->left->data>root->data){
        return false;
    }
    if(root->right!=NULL && root->right->data<root->data){
        return false;
    }
    if(BST(root->left)==true && BST(root->right)==true){
        return true;
    }
    return false;
} 
int main(){
    struct node *root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(12);
    root->left->right=newnode(8);
    root->left->left=newnode(6);
    root->right->left=newnode(11);
    root->right->right=newnode(14);
    if(BST(root)==true)
        printf("Given tree is BST");
    else
        printf("Given tree is not a BST");
    
}
