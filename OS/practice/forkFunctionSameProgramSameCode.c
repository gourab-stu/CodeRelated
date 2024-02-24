// same program same code
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid, p;
    p = fork();
    pid = getpid();
    if (p < 0) {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    printf("\nOutput of fork ID: %d\n", p);
    printf("Process id is: %d\n", pid);
    return 0;
}