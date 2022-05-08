#include<stdio.h>
#include<string.h>
void main() {
	char str1[20],str2[20];
	int same[20],k=0,i,j;
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);

	int character[strlen(str1)+1][strlen(str2)+1];
	char arrow[strlen(str1)+1][strlen(str2)+1];
	for(i=0;i<=strlen(str1);i++) {
		character[i][0] = 0;
		arrow[i][0]= ' ';
	}
	printf("\t\t");
	for(i=0;i<=strlen(str2);i++) {
		character[0][i] = 0;
		arrow[0][i]= ' ';
		printf("%c\t",str2[i]);
	}
	printf("\n\n");
	for(i=1;i<=strlen(str1);i++) {
		for(j=1;j<=strlen(str2);j++) {
			if(str1[i-1]==str2[j-1]) {
				character[i][j]=character[i-1][j-1]+1;
				arrow[i][j] = 'd';
			}
			else {
				if(character[i][j-1]<=character[i-1][j]) {
					character[i][j]=character[i-1][j];
					arrow[i][j] = '|';
				}
				else {
					character[i][j]=character[i][j-1];
					arrow[i][j] = '-';
				}
			}
		}
	}
	for(i=0;i<=strlen(str1);i++) {
		if(i!=0) {
			printf("%c\t",str1[i-1]);
		}
		else {
			printf("\t");
		}
		for(j=0;j<=strlen(str2);j++) {
			printf("%d %c\t",character[i][j],arrow[i][j]);
		}
		printf("\n");
	}
	for(i=strlen(str1);i>=1;i--) {
		for(j=strlen(str2);j>=1;j--) {
			if(arrow[i][j]=='d') {
				same[k++]=str1[i-1];
				i--;
			}
			else if(arrow[i][j]=='-') {

			}
			else if(arrow[i][j]=='|') {
				i--;
				j++;
			}
		}
	}
	printf("\nThe characters are: ");
	for(i=k-1;i>=0;i--) {
		printf("%c",same[i]);
	}
	printf("The LCS length is: %d\n",character[strlen(str1)][strlen(str2)]);
} 