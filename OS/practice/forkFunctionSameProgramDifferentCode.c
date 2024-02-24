// same program different code
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid = fork();
    if (pid < 0) {
        printf("\nError! ");
        exit(1);
    } else if (pid == 0) {
        printf("\nHello I'm child Process\n");
        printf("My pid is %d\n", getpid());
        exit(1);
    } else {
        printf("\nHello Parent Process\n");
        printf("My Actual pid is %d\n", getpid());
        exit(0);
    }
}