#include<stdio.h>

void main() {
    int m,p,s,p1,m1[4],i,f,f1=0,fra1,pos;
    printf("Enter the memory size: ");
    scanf("%d",&m);
    printf("Enter the no of partitions: ");
    scanf("%d",&p);
    s=m/p;
    printf("Each partition size is: %d",s);
    printf("\nEnter the no of processes: ");
    scanf("%d",&p1);
    pos=m;
    for(i=0;i<p1;i++) {
        if(pos<s) {
            printf("\nThere is no further memory for process %d",i+1);
            m1[i]=0;
            break;
        }
        else {
            printf("\n\nEnter the memory required for process %d: ",i+1);
            scanf("%d",&m1[i]);
            if(m1[i]<=s) {
                printf("Process is allocated in partition %d",i+1);
                fra1=s-m1[i];
                printf("\nInternal fragmentation for process is: %d",fra1);
                f1+=fra1;
                pos-=s;
            }
            else {
                printf("Process not allocated in partition %d",i+1);
            }
        }
    }
}