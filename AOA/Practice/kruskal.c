#include<stdio.h>
int find(int);
int uni(int,int);
	int parent[10];
void main() {
	int n,i,j,adjMat[10][10],totaledge=1,min,a,b,u,v,total=0;
	printf("Enter number of edges: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&adjMat[i][j]);
			if(adjMat[i][j]==0) {
				adjMat[i][j]=999;
			}
		}
	}
	while(totaledge<n) {
		min=999;
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				if(adjMat[i][j]<min) {
					min = adjMat[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
			u=find(u);
			v=find(v);
			if(uni(u,v)) {
				printf("%d Edge\nU: %d\nV: %d\nMin: %d\n",totaledge++,a,b,min);
				total+=min;
			}
			adjMat[a][b] = adjMat[b][a] = 999;
	}
	printf("MST: %d",total);
}
int find(int i) {
	while(parent[i]) {
		i= parent[i];
	}
	return i;
}
int uni(int i,int j) {
	if(i!=j) {
		parent[j]=i;
		return 1;
	}
	return 0;
}