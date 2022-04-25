#include <stdio.h>
#include <string.h>

int main()
{
	char a[20],b[20],same[20];

	int i,j,k=0,count=0;

	printf("Enter A String : ");
	gets(a);
	printf("Enter B String : ");
	gets(b);

	int ch[strlen(a)+1][strlen(b)+1];
	char arrow[strlen(a)+1][strlen(b)+1];

	for(i=0;i<=strlen(a);i++)
	{
		ch[i][0]=0;
		arrow[i][0]=' ';
	}

	printf("\t\t");
	for(i=0;i<=strlen(b);i++)
	{
		ch[0][i]=0;
		arrow[0][i]=' ';
		printf("%c\t",b[i]);
	}
	printf("\n\n");

	for(i=1;i<=strlen(a);i++)
	{
		for(j=1;j<=strlen(b);j++)
		{
			if(a[i-1]==b[j-1])
			{
				ch[i][j]=ch[i-1][j-1]+1;
				arrow[i][j]='d';
			}
			else
			{
				if(ch[i][j-1]<=ch[i-1][j])
				{
					ch[i][j]=ch[i-1][j];
					arrow[i][j]='|';
				}
				else
				{
					ch[i][j]=ch[i][j-1];
					arrow[i][j]='-';
				}
			}
		}
	}

	for(i=0;i<=strlen(a);i++)
	{
		if(i!=0)
			printf("%c\t",a[i-1]);
		else
			printf("\t");
		for(j=0;j<=strlen(b);j++)
		{
			printf("%d %c\t",ch[i][j],arrow[i][j]);
		}
		printf("\n");
	}

	for(i=strlen(a);i>=1;i--)
	{
		for(j=strlen(b);j>=1;j--)
		{
			if(arrow[i][j]=='d')
			{
				same[k++]=a[i-1];
				i--;
			}
			else if(arrow[i][j]=='-')
			{
				//do nothing
			}
			else if(arrow[i][j]=='|')
			{
				i--;
				j++;
			}
		}
	}

	printf("\nThe Character which are same are : ");
	for(i=k-1;i>=0;i--)
		printf("%c",same[i]);
	printf("\nThe length of LCS : %d\n",ch[strlen(a)][strlen(b)]);
}