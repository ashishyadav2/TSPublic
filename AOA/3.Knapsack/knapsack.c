#include<stdio.h>
#include<conio.h>

struct knapsack {
    char id;
    int profit;
    int weight;
    float ratio;
};
struct knapsack items[10],temp;
void main() {
    int n,i,j,capacity,weight;
    float maxprofit=0;
    printf("Enter capacity of knapsack: ");
    scanf("%d",&capacity);
    printf("Enter number of Items: ");
    scanf("%d",&n);

    // getting profit and weight data from user and calculting pi/wi ratio
    for(i=0;i<n;i++) {
    printf("Enter Profit and Weight of Item %c: ",i+65);
    scanf("%d %d",&items[i].profit,&items[i].weight);
    items[i].id = i+65;
    items[i].ratio = (float) items[i].profit/items[i].weight;
    }
    
    // printing data entered by uset
    printf("\n---------Entered Data------------\n");
    printf("Items\tProfit\tWeight\tPi/wi\n");
    for(i=0;i<n;i++) {
    printf("%c\t%d\t%d\t%0.3f\n",items[i].id,items[i].profit,items[i].weight,items[i].ratio);
    }

    // sorting the table according to the pi/wi ratio in descending order using bubble sort
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(items[j].ratio<items[j+1].ratio) {
                temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }
        }
    }

    // printing the data after sorting
    printf("\n---------Sorted Data------------\n");
    printf("Items\tProfit\tWeight\tPi/wi\n");
    for(i=0;i<n;i++) {
    printf("%c\t%d\t%d\t%0.3f\n",items[i].id,items[i].profit,items[i].weight,items[i].ratio);
    }   

    // actual knapsack algorithm
    int currentWeight =0;
    int currentSpace;
    for(i=0;i<n-1;i++) {
        if((currentWeight+items[i].weight)<= capacity) {
            currentWeight+=items[i].weight;
            maxprofit+=items[i].profit;
        }
        else {
            currentSpace = capacity- currentWeight;
            maxprofit += (float) (items[i].profit*currentSpace)/items[i].weight;
        }
    }
    printf("\nMax Profit: %0.3f\n",maxprofit);
}