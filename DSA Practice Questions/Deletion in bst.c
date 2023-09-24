#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *nnode(int d){
    struct node *nn=malloc(sizeof(struct node));
    nn->data=d;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}
struct node *insert(struct node *root,int d){
    if(root==NULL){
        struct node *newnode=nnode(d);
        return newnode;
    }
    if(root->data<d){
        root->right=insert(root->right,d);
        return root;
    }
    if(root->data>d){
        root->left=insert(root->left,d);
        return root;
    }
    return root;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
struct node * delete(struct node *root,int d){
    if(root==NULL){
        return root;
    }
    if(root->data>d){
        root->left=delete(root->left,d);
        return root;
    }
    else if(root->data<d){
        root->right=delete(root->right,d);
        return root;
    }
    if (root->left == NULL) {
        struct node* temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL) {
        struct node* temp = root->left;
        free(root);
        return temp;
    } 
    else {
 
        struct node* t1 = root;
        struct node* t2 = root->right;
        while (t2->left != NULL) {
            t1 = t2;
            t2 = t2->left;
        }
        if (t1 != root)
            t1->left = t2->right;
        else
            t1->right = t2->right;
        root->data = t2->data;
        free(t2);
        return root;
    }
}
int main(){
    root=insert(root,10);
    insert(root,20);
    insert(root,5);
    inorder(root);
    root=delete(root,10);
    inorder(root);
}
