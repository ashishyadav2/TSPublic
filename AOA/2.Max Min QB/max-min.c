#include<stdio.h>

void MaxMin(int,int); //function prototype

int array[100];
int max,min;

void main() {
int num,i;
printf("Enter the size of array: ");
scanf("%d",&num);
for(i=1;i<=num;i++) {
  printf("Enter element at location %d: ",i);
  scanf("%d",&array[i]);
}
max = array[0];
min = array[0];
MaxMin(1,num);
printf("\nLargest element in array: %d\n",max);
printf("Smallest element in array: %d\n",min);
}

void MaxMin(int start,int end) { //start and ends are indices of array
  int max1,min1,mid;

  if(start==end) {
    max = min = start;
  }
  else {
    if(start==end-1) {
      if(array[start]>array[end]) {
        max = array[start];
        min = array[end];
      }
      else {
        max = array[end];
        min = array[start];
      }
    }
    else {
      mid=(start+end)/2;
      MaxMin(start,mid);
      max1 = max;
      min1 = min;
      MaxMin(mid+1,end);
      if(max<max1) {
        max = max1;
      }
      if(min>min1) {
        min = min1;
      }
    }
  }
}