/*
* PROBLEM:
* --------
* There is an array of 'n' number of elements. If
* the product of the 1st half elements of the array
* is smaller than the product of the next half elements
* of the array then reverse the array, otherwise do not
* reverse it, and finally print the processed array.
* 
* CONSTRAINTS:
* ------------
* 1. input will consist of 2 lines
*    (a) number of elements as 'n'
*    (b) array elements separated by a blank space ' '
* 2. 'n' can be any integer including zero
* 3. array elements can be any integer either positive or
*    negative or zero
* 4. if 'n' is odd numbered then firstly, calculate the product
*    from the 1st element up to the previous element of the
*    middle element and then, calculate the product of rest of
*    the elements
* 5. if 'n' is even numbered then firstly, calculate the
*    product from the 1st element up to the middle position of
*    the array and then, calculate the product of rest of the
*    elements
* 6. if 'n' is zero, then print a message "Error: Enter at least one
*    element" without quotes
* 7. print the output array where all the array elements will be
*    separated by a total of 'n' number of blank spaces
* 
* EXAMPLES:
* --------
* input -> 5, 1 2 3 4 5
* process -> calculate [1 * 2] = 2
*            calculate [3 * 4 * 5] = 60
*            2 < 60, so reverse the array
* output -> 5 4 3 2 1 
* 
* input -> 6, 1 2 3 4 5 6
* process -> calculate [1 * 2 * 3] = 6
*            calculate [4 * 5 * 6] = 120
*            6 < 120, so reverse the array
* output -> 6 5 4 3 2 1
*/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if (n > 2) {
            int prod1 = 1, prod2 = 1, i;
            for (i = 0; i < (n / 2); i++) {
                prod1 *= arr[i];
            }
            for ( ; i < n ; i++) {
                prod2 *= arr[i];
            }
            if (prod1 < prod2) {
                for (int j = 0; j < (n / 2); j++) {
                    int temp = arr[j];
                    arr[j] = arr[n - j - 1]; 
                    arr[n - j - 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Error: Enter at least one element");
    }
    return 0;
}