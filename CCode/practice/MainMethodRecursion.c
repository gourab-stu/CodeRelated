#include <stdio.h>

int main() {
    int i = 0;
    printf("Hello World %d", ++i);
    main();
    printf("Hello World %d", ++i);
    return 0;
}