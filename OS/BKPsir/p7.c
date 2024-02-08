#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t p = fork();
    if (p < 0)
        printf("unsucessful child creation\n");
    else {
        printf("id of the child process %d\n", p); 
        printf("process id = %d\n", getpid());
    }

    pid_t p1 = fork();
    if (p1 < 0)
        printf("unsucessful child creation\n");
    else {
        printf("id of the child process %d\n", p1); 
        printf("process id = %d\n", getpid());
    }
    return 0;
}