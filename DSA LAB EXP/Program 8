//Height of a binary tree
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
int height(struct node *root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    if(left>right){
        return left+1;
    }
    else{
        return right+1;
    }
}
int main(){
    struct node *root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(12);
    root->left->right=newnode(8);
    root->left->left=newnode(6);
    root->right->left=newnode(11);
    root->right->right=newnode(14);
    root->right->right->left=newnode(15);
    int h=height(root);
    printf("Height of the tree:- %d",h);
}
