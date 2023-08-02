#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX],top=-1;
void push(int d){
    if(top==MAX){
        printf("Stack overflow");
    }
    else{
        stack[++top]=d;
    }
}
void pop(){
    if(top==-1){
        printf("Stack empty");
        }
    else{
        --top;
    }
}
void peek(){
    printf("the top element is %d\n",stack[top]);
}
void print(){
    int t=top;
    while(t!=-1){
        printf("%d",stack[t]);
        t--;
    }
    printf("\n");
}
int main()
{
    push(1);
    push(2);
    print();
    peek();
    pop();
    print();
    return 0;
}
