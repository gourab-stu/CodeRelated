// Before terminating, the parent waits for the child to finish its task
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    int pid = fork();
    if (pid < 0) {
        printf("\n Error! ");
        exit(1);
    } else if (pid == 0) {
        printf("\nHello I'm child Process\n");
        printf("My pid is %d\n", getpid());
        exit(1);
    } else {
        printf("\nHello Parent Process\n");
        printf("My Actual pid is %d\n", getpid());
        wait(NULL);
        exit(0);
    }
    return 0;
}