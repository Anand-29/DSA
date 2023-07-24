 //6//balancing paranthesis
#include<stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX];
int top=-1;

//push the data into stack
void push(char val){
    stack[++top]=val;
}


//peek for the top element
char peek(){
    return stack[top];
}

//delete a data
void pop(){
    top--;
}

//Driver
int main(){
    printf("Enter the Expression:-\n");
    char s[MAX];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            push(s[i]);
        else{
            char v=peek();
            if(v=='{'){
                pop();
            }
            else if(v=='('){
                pop();
            }
            else if(v=='['){
                pop();
            }
            else{
                top=MAX;
                break;
            }
        }
    }
    if(top==-1)
        printf("Balanced");
    else
        printf("Not Balanced");
    return 0;
}
