#include<stdio.h>
#include<stdlib.h>
int count,board[20],z;
void main() {
    int n,i,j;
    int queen(int row,int n);
    printf("Enter no of queens: ");
    scanf("%d",&n);
    printf("Enter no of solutions: ");
    scanf("%d",&z);
    queen(1,n);
}
void print(int n) {
    int i,j;
    printf("\n\nSolution %d:\n\n", ++count);
    for(i=1;i<=n;++i) {
        printf("\t%d",i);
    }
    for(i=1;i<=n;++i) {
        printf("\n\n%d", i);
        for(j=1;j<=n;++j) {
            if(board[i]==j) 
                printf("\tQ");
            else 
                printf("\t-");
        }
    }
}
int place(int row,int column) {
    int i;
    for(i=1;i<=row-1;++i) {
        if(board[i]==column){
            return 0;
        }
        else if(abs(board[i]-column) == abs(i-row)){
            return 0;
        }
    }
        return 1;
}
int queen(int row,int n) {
    if(count==z) {
        return 0;
    }
    else {
        int column;
        for(column=1;column<=n;++column) {
            if(place(row,column)) {
                board[row]=column;
                if(row==n) {
                    print(n);
                }
                else {
                    queen(row+1,n);
                }
            }
        }
    }
}