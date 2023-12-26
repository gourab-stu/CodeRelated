#include <iostream>

// int arr[100], size;

// int maxValueInArray(int arr[]) {
//     int max = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > arr[max])
//             max = i;
//     }
//     return max;
// }

// int numberOfDigits(int num) {
//     int n = num, r, count = 0;
//     while (n > 0) {
//         r = n % 10;
//         count++;
//         n = n / 10;
//     }
//     return count;
// }

// int power(int p) {
//     if (p == 1)
//         return 10;
//     else
//         return 10 * power(--p);
// }

// int* hash1(int arr[]) {
//     int newSize = power(numberOfDigits(maxValueInArray(arr))), newArr[newSize],  r;
//     int* ptr = newArr;
//     for (int i = 0; i < newSize; i++) 
//         newArr[i] = 0;
//     for (int i = 0; i < size; i++) {
//         r = arr[i] % newSize;
//         newArr[r] = arr[i];
//     }
//     size = newSize;
//     return ptr;
// }

int main() {
    int arr[10], temp, size;
    for (int i = 0; i < 10; i++)
        arr[i] = 0;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if (size <= 0) 
        exit(0);
    for (int i = 0; i < size; i++) {
        std::cout << "Enter data no " << (i + 1) << ": ";
        std::cin >> temp;
        arr[temp % 10] = temp;
    }
    // int* a = hash1(arr);
    std::cout << "The array is" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    return 0;
}