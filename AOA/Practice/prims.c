#include<stdio.h>
void main() {
    int i,j,n,adjMat[10][10],min,count,visited[10],total=0,u=0,v=0;
    printf("Enter no of vertices: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        visited[i]=0;
        for(j=0;j<n;j++) {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&adjMat[i][j]);
            if(adjMat[i][j]==0) {
                adjMat[i][j] = 999;
            }
        }
    }
    visited[0] = 1;
    for(count=0;count<n-1;count++) {
        min=999;
        for(i=0;i<n;i++) {
            if(visited[i]==1) {
                for(j=0;j<n;j++) {
                    if(visited[j]!=1) {
                        if(min>adjMat[i][j]){
                            min = adjMat[i][j];
                            u=i;
                            v=j;
                        }
                    }
                }
            }
        }
        visited[v]=1;
        total+=min;
    }
    printf("U: %d\nV: %d\nMin: %d\n",u,v,min);
    printf("MST: %d",total);
}