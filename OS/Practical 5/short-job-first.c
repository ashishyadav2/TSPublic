#include <stdio.h>
void main()
{
    int p[20],bt[20],tat[20],total=0,wt[0],i,j,n,temp;
    float avg_wt,avg_tat;

    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter Burst Time of Process P%d: ",i+1);
        scanf("%d",&bt[i]);
        p[i] = i+1;
    }

    // sorting burst times
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(bt[j]>bt[j+1]) {
                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1]=temp;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1]=temp;
            }
        }
    }
    // waiting time
    wt[0]=0;
    for(i=1;i<n;i++) {
        wt[i] = 0;
        for(j=0;j<i;j++) {
            wt[i]+=bt[j];
        }
        total+=wt[i];
    }
    avg_wt = (float) total/n;
    total= 0;
    printf("\n-----------TABLE------------\n");
    printf("P\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++) {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("P%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat = (float) total/n;
    printf("\nAverage Waiting Time: %0.2f ms\n",avg_wt);
    printf("Average Turnaround Time: %0.2f ms",avg_tat);    
}