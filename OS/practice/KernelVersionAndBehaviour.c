#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main() {
    int m = 0;
    struct utsname s1;
    m = uname(&s1);
    if (m == 0) {
        printf("\nThe name of System:%s , system", s1.sysname);
        printf("\nThe version:%s", s1.version);
        printf("\nThe Machine:%s", s1.machine);
        printf("\n");
        system("cat /proc/cpuinfo | awk 'NR==3, NR==4{print}' \n");
    } else {
        printf("Error");
    }
    return 0;
}