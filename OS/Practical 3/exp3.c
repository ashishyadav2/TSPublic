#include<stdio.h>
#include<unistd.h>
int main() {
    int pid;
    pid = fork();

    if(pid<0)
    printf("Child process not created");
    else if(pid==0) {
        printf("Child process created\n");
        printf("Child process id is: %d\n",getpid());
    }
    else if(pid>0)
    printf("Parent process id is: %d\n",getpid());
    return 0;
}
