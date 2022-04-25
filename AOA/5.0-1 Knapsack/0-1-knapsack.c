#include<stdio.h>
#include<conio.h>
int sum=0;


void main()
{
	int w[10]={2,20,20,30,40,30,60,10};
	int p[10]={15,100,90,60,40,15,10,1};
	int m=102;
	int n=8;
	int v[100][200],x[10],i,j;
	printf("\nItem No.\tProfit\tWeight\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\t%d\n",i+1,p[i],w[i]);
	}
	for(i=0;i<=m;i++)
		v[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(j>=w[i])
				v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
			else
				v[i][j]=v[i-1][j];
		}
	}
	for(i=1;i<=n;i++)
		x[i]=0;
	i=n;
	j=m;
	while(i>0 && j>0)
	{
		if(v[i][j]!=v[i-1][j])
		{
			x[i]=1;
			j=j-w[i];
		}
		i--;
	}
	printf("\nOptimal set of weight is:\n");
	for(i=1;i<=n;i++)
	{
		if(x[i]==1)
		{
			printf("X%d=1\t",i);
			sum=sum+p[i];
		}
		else
			printf("X%d=0\t",i);
	}
	printf("\nTotal profit -> %d",sum);
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}