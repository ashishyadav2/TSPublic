#include<stdio.h>
#include<string.h>
int i,j,path[20];
void prefix(char pattern[]) {
    j = -1;
    path[0]=j;
    for(i=1;i<strlen(pattern);i++) {
        while(j>-1&&pattern[j+1]!=pattern[i]) {
            j = path[j];
        }
        if(pattern[j+1]==pattern[i]) {
            j++;
            path[j] = j;
        }
    }
}
void kmp(char text[],char pattern[]) {
    int k=-1;
    prefix(pattern);
    for(i=0;i<strlen(text);i++) {
        while(k>0&&pattern[k+1]!=text[i]) {
            k = path[k];
        }
        if(pattern[k+1]==text[i]) {
            k++;
        }
        if(k==strlen(pattern)-1) {
            j=i-strlen(pattern)+1;
            printf("\nShift: %d",j);
            break;
        }
    }
}
void main() {
    char pattern[20],text[20];
    printf("Enter text string: ");
    gets(text);
    printf("Enter pattern: ");
    gets(pattern);
    kmp(text,pattern);
}