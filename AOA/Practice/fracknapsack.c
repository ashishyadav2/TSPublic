#include<stdio.h>
struct items {
    char id;
    int profit;
    int weight;
    float ratio;
};
struct items item[10],temp;
float frac,maxp=0,flag[10];
void main() {
    int m,n,i,j;
    printf("Enter weight of knapsack: ");
    scanf("%d",&m);
    printf("Enter no of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter profit and weight of item %c: ",i+65);
        scanf("%d %d",&item[i].profit,&item[i].weight);
        item[i].id = i+65;
        flag[i]=0;
        item[i].ratio = (float) item[i].profit /(float) item[i].weight;
    }

    printf("\n---------Entered Items----------\n");
    printf("Item\tProfit\tweight\tPi/wi\n");
    for(i=0;i<n;i++) {
        printf("%c\t%d\t%d\t%0.3f\n",item[i].id,item[i].profit,item[i].weight,item[i].ratio);
    }

    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(item[j+1].ratio>item[j].ratio) {
                temp = item[j];
                item[j] = item[j+1];
                item[j+1] = temp;
            }
        }
    }

    printf("\n---------Sorted Items----------\n");
    printf("Item\tProfit\tweight\tPi/wi\n");
    for(i=0;i<n;i++) {
        printf("%c\t%d\t%d\t%0.3f\n",item[i].id,item[i].profit,item[i].weight,item[i].ratio);
    }

    int rem=m;
    i=0;
    while(rem>0) {
        if(item[i].weight<=rem) {
            maxp += item[i].profit;
            rem-=item[i].weight;
            flag[i]=1;
        }
        else {
            maxp+= (float) item[i].profit * (float) rem / (float) item[i].weight;
            frac = (float) rem*100 / (float) item[i].weight;
            flag[i]=frac;
            rem=0;
        }
        i++;
    }
    printf("Output: %0.3f\n",maxp);
    printf("Items picked: ");
    for(i=0;i<n;i++) {
        if(flag[i]==1) {
            printf("Item %c, ",item[i].id);
        }
        else if(flag[i]>1) {
            printf("Item%c(%0.3f)",item[i].id,flag[i]);
        }
    }
}