#include<stdio.h>
    int arr[7] = {50,47,32,30,35,309,42};
    int max,min;

void maxmin(int start,int end) {
    int mid,min1,max1;
    if(start==end) {
        max1 = min1 = start;
    }
    else {
        if(start==end-1) {
            if(arr[start]>arr[end]) {
                max = arr[start];
                min = arr[end];
            }
            else {
                min = arr[start];
                max = arr[end];
            }
        }
    else {
        mid = (start+end)/2;
        maxmin(start,mid);
        max1 = max;
        min1 = min;
        maxmin(mid+1,end);
        if(max1>max) {
            max = max1;
        }
        if(min>min1) {
            min = min1;
        }
    }
}
}
void main() {
    max = arr[0];
    min = arr[0];
    maxmin(1,7);
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
}
