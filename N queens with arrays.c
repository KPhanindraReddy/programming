#include <stdio.h>
#include <string.h>

#define MAX 15
#define MAX_SOLUTIONS 1000

char ans[MAX_SOLUTIONS][MAX][MAX+1];
int ansCount=0;

void solve(char board[MAX][MAX+1],int ld[2*MAX],int ud[2*MAX],int lr[MAX],int size,int col){
    if(col==size){
        for(int i=0;i<size;i++) strcpy(ans[ansCount][i],board[i]);
        ansCount++;
        return;
    }
    for(int row=0;row<size;row++){
        if(lr[row]==0&&ld[row+col]==0&&ud[size-1+col-row]==0){
            board[row][col]='Q';
            lr[row]=1;
            ld[row+col]=1;
            ud[size-1+col-row]=1;
            solve(board,ld,ud,lr,size,col+1);
            board[row][col]='.';
            lr[row]=0;
            ld[row+col]=0;
            ud[size-1+col-row]=0;
        }
    }
}

int main(){
    int size=4;
    char board[MAX][MAX+1];
    int lr[MAX]={0},ld[2*MAX]={0},ud[2*MAX]={0};

    for(int i=0;i<size;i++){
        memset(board[i],'.',size);
        board[i][size]='\0';
    }

    solve(board,ld,ud,lr,size,0);

    for(int i=0;i<ansCount;i++){
        printf("Solution %d:\n",i+1);
        for(int j=0;j<size;j++) printf("%s\n",ans[i][j]);
        printf("\n");
    }

    return 0;
}
