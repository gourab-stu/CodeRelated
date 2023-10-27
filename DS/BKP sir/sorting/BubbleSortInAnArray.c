#include <stdio.h>

void main()
{
    int a[50], size;
    printf("Enter the size of the array (must be < 50): ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("After sorting in ascending order, the array is\n");
    for (int i = 0; i < size; i++)
        printf("a[%d] = %d\n", i, a[i]);
}