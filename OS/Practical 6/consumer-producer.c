#include<stdio.h>
#include<stdlib.h>

void producer();
void consumer();
int wait(int);
int signal(int);

int s=1,full=0,empty=3,x=0;
void main() {
    int n;
    printf("MENU\n");
    printf("1.Producer\n2.Consumer\n3.Exit");
    while(1) {
        printf("\nYour Choice: ");
        scanf("%d",&n);
        switch(n) {
            case 1: if((s==1) && (empty!=0)) {
                    producer();
                }
                else {
                    printf("\nBuffer is Full");
                }
            break;
            case 2: if((s==1) && (full !=0)) {
                    consumer();
                }
                else {
                    printf("\nBuffer is empty");
                }
            break;
            case 3: exit(0);
            break;
            default: printf("\nInvalid choice");
            break;
        }
    }
}

int wait(int s) {
    return (--s);
}
int signal(int s) {
    return (++s);
}
void producer() {
    s = wait(s);
    full = signal(full);
    empty = wait(empty);
    x++;
    printf("\nProducer produces the item %d: ",x);
    s = signal(s);
}
void consumer() {
    s = wait(s);
    full = wait(full);
    empty = signal(empty);
    printf("\nConsumer consumes item %d: ",x);
    x--;
    s = signal(s);
}