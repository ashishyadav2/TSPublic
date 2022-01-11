#include<stdio.h>
#include<conio.h>
void main() {
    int arr[10] = {2,59,3,6,9,13,56,8,10,23};
    int n = 10,j,i,k,item;
    int comp=0,moves=0;
    for(j=2;j<n;j++) {
        item=arr[j];
        i=j-1;
        moves++;
        while((i>=1) && (item<arr[i])) {
            arr[i+1] = arr[i];
            comp++;
            i--;
        }
        arr[i+1] = item;
    }
    for(k=0;k<n;k++) {
        printf("%d\n",arr[k]);
    }
    printf("Comparisons: %d\nMoves: %d",comp,moves);
}
