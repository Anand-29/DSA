#include<stdio.h>
#include <stdbool.h>
void printsolution(int q[4][4],int s[][4]){
    printf("Question:-\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",q[i][j]);
        }
        printf("\n\n");
    }
    printf("Answer:-\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",s[i][j]);
        }
        printf("\n\n");
    }
}
bool safe(int q[4][4],int s[4][4],int r,int c){
    if(r>=0 && c>=0 && r<4 && c<4 && q[r][c]==1){
        return true;
    }
    return false;
}
bool solution(int q[4][4],int s[4][4],int r,int c){
    if(r==4-1 && c==4-1 && q[r][c]==1){
        s[r][c]=1;
        return true;
    }
    if(safe(q,s,r,c)==true){
        if(s[r][c]==1){
            return false;
        }
        s[r][c]=1;
        if(solution(q,s,r+1,c)==true){
            return true;
        }
        if(solution(q,s,r-1,c)==true){
            return true;
        }
        if(solution(q,s,r,c+1)==true){
            return true;
        }
        if(solution(q,s,r,c-1)==true){
            return true;
        }
    }
    return false;
}
int main(){
    int n=4;
    int question[4][4]={{1,1,0,0},
                        {0,1,1,1},
                        {0,1,0,0},
                        {1,1,1,1}};
    int sol[4][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
    if(solution(question,sol,0,0)==false){
        printf("Rat cannot reach");
    }
    else{
        printsolution(question,sol);
    }
}
