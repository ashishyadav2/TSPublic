#include<stdio.h>
#include<conio.h>
int split(int [],int,int,int);
void minmax(int[],int,int,int);
void main() { 
int a[100],i,j,n,c;
printf("\nHow many elements");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
  if(n==1)
  printf("\n max=min=%d",a[0]);
  else
  c=split(a,0,n-1,0);

    printf("\n Max is =%d",a[0]);
    printf("\n min is =%d",a[n-1]);
   printf("\n count=%d",c);
    }


 int  split(int a[],int left,int right,int c)
 { int mid;
 if(left<right)
 {
 mid=(left+right)/2;
c= split(a,left,mid,c);
c= split(a,mid+1,right,c);
c++;
 minmax(a,left,mid,right);
return c;
 }
 return c;
 }

 void minmax(int a[],int i,int m,int j)
{int c[50];
int p,q,r;
p=i;
q=m+1;
r=i;
while(p<=m && q<=j)
{
if(a[p]<=a[q])
{ c[r]=a[p];
p++;
}
else
{
c[r]=a[q];
q++;
}
r++;
}
while(p<=m)
{ c[r]=a[p];
p++;
r++;
}
while(q<=j)
{
c[r]=a[q];
q++;
r++;
}
for(r=i;r<=j;r++)
a[r]=c[r];
}