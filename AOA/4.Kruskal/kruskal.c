#include<stdio.h>
#include<conio.h>
#define MAX 50

void main()
{
	int a[MAX][MAX];
	int parent[MAX];
	int min;
	int u=0;
	int v=0;
	int total=0;
	int tedge=1;
	int n,i,j,count;
	
	printf("Enter the total number of vertex: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		parent[i]=0;
		for(j=0;j<n;j++)
		{
			printf("\n Enter value for Matrix[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				a[i][j]=999;
			}
		}
	}
	
	while(tedge<n)
	{
		min=999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(min > a[i][j])
				{
					min = a[i][j];
					u=i;
					v=j;
				}
			}
		}
		
		while(parent[u]!=0)
		{
			u=parent[u];
		}
		while(parent[v]!=0)
		{
			v=parent[v];
		}
		if(v!=u)
		{
			tedge++;
			printf("\n Min tedge found at : %d -> %d with weight %d ",u,v,min);;
			total=total+min;
			parent[v]=u;
		}
		
		a[u][v]=a[v][u]=999;
	}
	printf("\nWeight of the minimum spanning tree is: %d",total);
}