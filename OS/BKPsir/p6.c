#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t p = fork();
    if (p < 0)
        printf("unsucessful child creation\n");
    else
        printf("%d\n", p);
    return 0;
}