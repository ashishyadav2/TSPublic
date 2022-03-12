#include<stdio.h>
#include<conio.h>
void main() {
    int arr[10] = {5,6,2,1,8,4,3,9,7,10};
    int n = 10,j,i,k,item,max_comp,max_move,comp_percent=0,move_percent=0,avg_percent=0;
    int comparisons=0,moves=0;
    max_comp=n*(n-1)/2;
    max_move=n-1;

    printf("Unsorted Array: \n");
    for(k=0;k<n;k++) {
        printf("%d\n",arr[k]);
    }

    for(j=1;j<n;j++) {
        item=arr[j];
        i=j-1;
        comparisons++;
        while((i>=0) && (item<arr[i])) {
            moves++;
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = item;
    }
    printf("Sorted Array: \n");
    for(k=0;k<n;k++) {
        printf("%d\n",arr[k]);
    }
    printf("comparisons: %d\nMoves: %d\n",comparisons,moves); 

    comp_percent = comparisons*100/max_comp;
    move_percent = moves*100/max_move;

    printf("comparisons Percentage: %d%c\nMoves Percentage: %d%c",comp_percent,37,move_percent,37); 

    avg_percent = comp_percent+move_percent;

    if(avg_percent>=0&&avg_percent<=33) {
        printf("\nAverage Percentage: %d%c",avg_percent,37);
        printf("\nBest Case");
    }
    else if(avg_percent>=34&&avg_percent<=66) {
        printf("\nAverage Percentage: %d%c",avg_percent,37);
        printf("\nAverage Case");
    }
    else {
        printf("\nAverage Percentage: %d%c",avg_percent,37);
        printf("\nWorst Case");
    }
}
