#include <stdio.h>
int max(int,int);
int sum =0;
void main()
{
	int w[10] = {2, 20, 20, 30, 40, 30, 60, 10};
	int p[10] = {15, 100, 90, 60, 40, 15, 10, 1};
	int m = 102;
    int n= 8;
    int matrix[100][200],i,j,flag[10];
    printf("\nItem no.\tProfit\tWeight\n");
    for(i=0;i<n;i++) {
        printf("%d\t\t%d\t%d\n",i+1,p[i],w[i]);
    }
    for(i=0;i<=m;i++) {
        matrix[0][i]=0;
    }
    for(i=1;i<=n;i++) {
        for(j=0;j<=m;j++) {
            if(j>=w[i]) {
                matrix[i][j] = max(matrix[i-1][j],matrix[i-1][j-w[i]]+p[i]);
            }
            else {
                matrix[i][j] = matrix[i-1][j];
            }
        }
    }
    for(i=1;i<=n;i++) 
        flag[i]=0;
    i=n;
    j=m;
    while(i>0&&j>0) {
        if(matrix[i][j]!=matrix[i-1][j]) {
            flag[i]=1;
            j=j-w[i];
        }
        i--;
    }
    printf("Answer is\n");
    for(i=1;i<=n;i++) {
        if(flag[i]==1) {
            printf("X%d=1\n",i);
            sum+=p[i];
        }
        else {
            printf("X%d=0\n",i);
        }
    }
    printf("\nTotal profit: %d\n",sum);
}
int max(int a,int b) {
    if(a>b) {
        return a;
    }
    else {
        return b;
    }
}
