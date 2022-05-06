#include<stdio.h>
#include<conio.h>

void main() {
    int array[100];
    int i,n,item,j;
    //get array size from user
    printf("Enter size of array: "); 
    scanf("%d",&n);

    // store elements in array using for loop
    for(i=0;i<n;i++) {
    printf("Element at location(%d): ",i+1);
    scanf("%d",&array[i]);
    }

    // insertion sort algorithm
    for (j=1;j<n;j++) {
        item = array[j];
        i=j-1;
        while ((i>=0) && (item<array[i])) {
            array[i+1] = array[i];
            i--;
        }
        array[i+1]=item;
    }

    //displaying sorted array
    printf("\n--------Sorted Array-------\n");
    for(i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }
}