#include<stdio.h>
void main() {
int arr[7] = {2,65,6,89,15,52,21};
int j,i,item;
for(j=1;j<7;j++) {
    item = arr[j];
    i = j-1;
    while (i>=0&& item<arr[i]) {
        arr[i+1] =  arr[i];
        i--;
    }  
    arr[i+1]  = item;
}
for(i=0;i<7;i++) {
    printf("%d\n",arr[i]);
}
}