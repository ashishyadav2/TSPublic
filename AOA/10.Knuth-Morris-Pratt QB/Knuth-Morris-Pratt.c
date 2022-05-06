#include <stdio.h>
#include <string.h>
int i, path[20], k;
void prefix(char p[])
{
    int k = -1;
    path[0] = k;
    for (i = 1; i < strlen(p); i++)
    {
        while (k > -1 && p[k + 1] != p[i])
            k = path[k];
        if (p[k + 1] == p[i])
            k++;
        path[i] = k;
    }
}
void kmp(char t[], char p[])
{
    int q = -1;
    prefix(p);
    for (i = 0; i < strlen(t); i++)
    {
        while (q > -1 && p[q + 1] != t[i])
            q = path[q];
        if (p[q + 1] == t[i])
            q++;
        if (q == strlen(p) - 1)
        {
            k = i - strlen(p) + 1;
            printf("\nPattern found with shift : %d", k);
            break;
        }
    }
}
void main()
{
    char t[20], p[20];
    printf("Enter the text string : ");
    gets(t);
    printf("Enter the pattern string : ");
    gets(p);
    kmp(t, p);
}