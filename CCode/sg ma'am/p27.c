#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[40], pos, i, size, value;
    // clrscr();
    printf("Enter number of elements in an array: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the position to insert the element: ");
    scanf("%d", &pos);
    printf("\nEnter the value into that position: ");
    scanf("%d", &value);
    for (i = size - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];
    arr[pos - 1] = value;
    printf("\nNew array is: \n");
    for (i = 0; i <= size; i++)
        printf("%d\n", arr[i]);
    getch();
}
