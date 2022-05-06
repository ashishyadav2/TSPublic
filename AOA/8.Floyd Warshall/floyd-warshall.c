#include <stdio.h>
#include <conio.h>
void main()
{
    int wt[10][10], n, i, j;
    void shortest_path(int matrix[10][10], int n);
    clrscr();
    printf("How many vertices?");
    scanf("%d", &n);
    printf("\nEnter the elements:(enter 999 as infinity value");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("\nwt[%d][%d]", i, j);
            scanf("%d", &wt[i][j]);
        }
    }
    printf("\nComputing APSP.....\n");
    shortest_path(wt, n);
    getch();
}
void shortest_path(int wt[10][10], int n)
{
    int D[5][10][10], i, j, k;
    int min(int, int);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            D[0][i][j] = wt[i][j]; // computing D(0)
        }
    }
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                D[k][i][j] = min(D[k - 1][i][j], (D[k - 1][i][k] + D[k - 1][k][j]));
            }
        }
    }
    // printing D(k)
    for (k = 0; k <= n; k++)
    {
        printf("D(%d)=\n", k);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d\t", D[k][i][j]);
            }
            printf("\n");
        }
    }
}
int min(int a, int b)
{
    {
        if (a < b)
            return a;
        else
            return b;
    }
}