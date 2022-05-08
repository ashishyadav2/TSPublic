#include<stdio.h>
void main() {
    int i,j,n=5,item;
    int array[5]= {5,50,98,79,14};
    for(j=1;j<n;j++) {
        item = array[j];
        i=j-1;
        while((i>=0)&&(item<array[i])) {
            array[i+1] = array[i];
            i--;
        }
        array[i+1]=item;
    }
    for(i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }
}