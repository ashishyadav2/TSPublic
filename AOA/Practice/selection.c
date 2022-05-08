#include<stdio.h>
void main() {
    int position,i,j,n=5,swap;
    int array[5]= {56,5,91,65,63};
    for(i=0;i<(n-1);i++) {
        position = i;
        for(j=i+1;j<n;j++) {
            if(array[position]>array[j]) {
                position =j;
            }
        }
            if(position!=i) {
                swap = array[i];
                array[i] = array[position];
                array[position] = swap;
            }
    }
    for(i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }
}