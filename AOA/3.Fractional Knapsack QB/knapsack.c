#include <stdio.h>

struct object
{
	int w;		 /*Weight*/
	int p;		 /*Profit*/
	int id;		 /*Identity*/
	float ratio; /*Ratio pi/wi*/
};

struct object item[10], temp;
int W, n, i, j, rem;
float maxp = 0, frac, flag[10];

void main()
{
	printf("\nCapacity Of Knapsack: ");
	scanf("%d", &W);

	printf("\nNumber Of Items: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\n[Item %c] Profit & Weight: ", i + 65);
		scanf("%d %d", &item[i].p, &item[i].w);
		item[i].id = 65 + i;
		flag[i] = 0;
		item[i].ratio = (float)item[i].p / (float)item[i].w;
	}

	printf("\n----------Entered Data----------\n");
	printf("\nItem \tProfit \tWeight \tRatio\n");
	for (i = 0; i < n; i++)
	{
		printf("\n %c \t%d \t%d \t%.3f", item[i].id, item[i].p, item[i].w, item[i].ratio);
	}
	printf("\n");

	/*Descending Sort*/
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n - 1; j++)
		{
			if (item[i].ratio < item[j + 1].ratio)
			{
				temp = item[i];
				item[i] = item[j + 1];
				item[j + 1] = temp;
			}
		}
	}

	printf("\n----------Sorted Items----------\n");
	printf("\nItem \tProfit \tWeight \tRatio\n");
	for (i = 0; i < n; i++)
	{
		printf("\n %c \t%d \t%d \t%.3f", item[i].id, item[i].p, item[i].w, item[i].ratio);
	}
	printf("\n");

	/*KnapSack Algorithm*/
	rem = W; /*KnapSack is Empty*/
	i = 0;
	while (rem > 0)
	{
		if (item[i].w <= rem)
		{
			maxp += item[i].p; /*Take the Whole item*/
			rem = rem - item[i].w;
			flag[i] = 1;
		}
		else
		{
			maxp += ((float)item[i].p * (float)rem) / (float)item[i].w; /*Take Fraction of item*/
			frac = (float)(rem * 100) / (float)item[i].w;
			flag[i] = frac;
			rem = 0; /*KnapSack is now Full*/
		}
		i++;
	}
	printf("\n>>>> MaxProfit Obtained: %.3f\n", maxp);
	printf("\n>>>> Items Picked: ");
	for (i = 0; i < n; i++)
	{
		if (flag[i] == 1)
			printf("%c ", item[i].id);
		else if (flag[i] > 1)
			printf("%c(%.2f%%).", item[i].id, flag[i]);
	}
	printf("\n");
}
