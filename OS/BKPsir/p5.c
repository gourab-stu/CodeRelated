#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    fork();
    printf("Sunday\n");
    fork();
    printf("Monday\n");
    fork();
    printf("Friday\n");
    return 0;
}