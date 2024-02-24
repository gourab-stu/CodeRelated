#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\nThe kernel version is, \n");
    system("cat /proc/sys/kernel/osrelease");
    printf("\nThe cpu space: \n");
    system("cat /proc/cpuinfo | awk 'NR==3, NR==4{print}' \n ");
    printf("\nAmount of cpu time since system was last booted is: ");
    system("cat /proc/uptime \n");
    system("cat /proc/meminfo | awk 'NR==1, NR==4{print $2}' \n ");
    printf("\nAmount of free memory: \n");
    system("cat /proc/meminfo |awk 'NR = 2{Print $2}' \n ");
    printf("\nAmount of used memory is: \n");
    system("cat /proc/meminfo | awk '{ if (NR==1) a=$2; if(NR==2) b=$2 }END {print a-b} ' \n");
    printf("\n");
    return 0;
}