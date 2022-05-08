#include<stdio.h>
int max,min;
int array[10] = {-5,-86,50,10,96,95,65,98,20,36};
void maxmin(int start,int end) {
  int max1,min1,mid;
  if(start==end) {
    max=min=start;
  }
  else {
    if(start==end-1) {
      if(array[start]>array[end]) {
        max = array[start];
        min = array[end];
      }
      else {
        min = array[start];
        max = array[end];
      }
    }
    else {
      mid=(start+end)/2;
      maxmin(start,mid);
      max1=max;
      min1=min;
      maxmin(mid+1,end);
      if(max1>max) {
        max=max1;
      }
      if(min1<min) {
        min = min1;
      }
    }
  }
}
void main() {
  max= array[0];
  min=array[1];
  maxmin(1,10);
  printf("max: %d",max);
  printf("min: %d",min);
}