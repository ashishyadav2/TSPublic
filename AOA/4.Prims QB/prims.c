#include <stdio.h>
#include <conio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX];
    int visited[MAX];
    int min;
    int u = 0;
    int v = 0;
    int total = 0;
    int n, i, j, count;

    printf("Enter the total number of vertex: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
        for (j = 0; j < n; j++)
        {
            printf("\n Enter value for Matrix[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                a[i][j] = 999;
            }
        }
    }
    visited[0] = 1;

    for (count = 0; count < n - 1; count++)
    {
        min = 999;
        for (i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                for (j = 0; j < n; j++)
                {
                    if (visited[j] != 1)
                    {
                        if (min > a[i][j])
                        {
                            min = a[i][j];
                            u = i;
                            v = j;
                        }
                    }
                } // inner for end
            }     // if end
        }         // for end

        visited[v] = 1;
        total = total + min;
        printf("\n Min Edge found at : %d -> %d with weight %d ", u, v, min);
    }
    printf("\nWeight of the minimum spanning tree is: %d", total);
    return 0;
}
4