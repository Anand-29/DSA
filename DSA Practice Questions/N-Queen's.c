#include <stdio.h>
#include <stdbool.h>
void printboard(int board[][4],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                printf("Q   ");
            }
            else{
                printf(".   ");
            }
        }
        printf("\n\n");
    }
}
bool safe(int board[][4],int n,int row,int col){
    for(int i=col;i>=0;i--){
        if(board[row][i]!=0){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]!=0){
            return false;
        }
    }
    for(int i=row,j=col;i<n && j<n;i++,j--){
        if(board[i][j]!=0){
            return  false;
        }
    }
    return true;
}
bool solution(int board[][4],int n,int col){
    if(col>=n){
        return true;
    }
    for(int i=0;i<n;i++){
        if(safe(board,n,i,col)==true){
            board[i][col]=1;
            if(solution(board,n,col+1)==true){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;
}
int main()
{
    int q[4][4];
    if(solution(q,4,0)==false){
        printf("Not possible\n");
    }
    else{
        printboard(q,4);
    }
}
