#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    fork();
    fork();
    fork();
    printf("Sunday\n");
    return 0;
}