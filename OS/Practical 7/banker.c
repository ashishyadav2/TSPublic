#include<stdio.h>

void main() {
    int i,j,k,m=5,n=3,y=0,flag=0,need[m][n],f[m],ans[m],ind = 0;
    int alloc[5][3] = { {0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2} };
    int max[5][3] = { {7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3} };
    int avail[3] = {3,3,2};
    for(k=0;k<m;k++) {
        f[k] = 0;
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    for(k=0;k<m;k++) {
        for (i = 0; i < m; i++) {
            if(f[i]==0) {
                flag = 0;
                for(j=0;j<n;j++) {
                    if(need[i][j] > avail[j]) {
                        flag=1;
                        break;
                    }
                }
                if(flag==0) {
                    ans[ind++] = i;
                    for(y=0;y<n;y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }
    printf("Following is the SAFE Sequence\n");
    for(i=0;i<m-1;i++) {
        printf("P%d->",ans[i]+1);
    }
    printf("P%d",ans[m-1]+1);
}