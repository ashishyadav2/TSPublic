#include<stdio.h>
void  main() {
int n,bt[20],wt[20],tat[20],avgwt=0,avgat=0,i,j,temp;
printf("Enter number of processes: ");
scanf("%d",&n);
for (i=0;i<n;i++) {
printf("Enter Process Burst Time of P%d: ",i+1);
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++) {
if(bt[i]>bt[i+1]) {
temp = bt[i];
bt[i+1] = temp;
bt[i]= bt[i+1];
}
}
}
wt[0]=0;
for(i=1;i<n;i++) {
wt[i+1]=bt[i]+wt[i];
}
for(i=0;i<n;i++) {
tat[i]=bt[i]+wt[i];
avgwt+=wt[i];
avgat+=tat[i];
printf("Process: P%d \n",i+1);
printf("Burst Time: %d \n",bt[i]);
printf("Turn around time:  %d \n",tat[i]);
printf("Waiting Time: %d\n",wt[i]);
printf("\n");
}
avgwt/=n;
avgat/=n;
printf("Avg Waiting Time: %d\n",avgwt);
printf("Avg Turnaround Time: %d\n",avgat);
}