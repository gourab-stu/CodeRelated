#include <iostream>
#include <stdlib.h>

class hashing {
    int arr[10], newArr[10], size;
public:
    hashing(int temp, int tempArr[]) {
        size = temp;
        std::copy(tempArr, tempArr + size + 1, arr);
    }

    int maxValueInArray(int arr[]) {
        int max = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > arr[max])
                max = i;
        }
        return max;
    }

    int numberOfDigits(int num) {
        int n = num, r, count = 0;
        while (n > 0) {
            r = n % 10;
            count++;
            n = n / 10;
        }
        return count;
    }

    int power(int p) {
        if (p == 1)
            return 10;
        else
            return 10 * power(--p);
    }

    void hash1() {
        int newSize = power(numberOfDigits(maxValueInArray(arr))),  r;
        for (int i = 0; i < newSize; i++) 
            newArr[i] = 0;
        for (int i = 0; i < size; i++) {
            r = arr[i] % newSize;
            newArr[r] = arr[i];
        }
        size = newSize;
    }

    void displayHashedArray() {
        std::cout << "The array is" << std::endl;
        for (int i = 0; i < size; i++)
            std::cout << "arr[" << i << "] = " << newArr[i] << std::endl;
    }
};

int main() {
    int arr[10], choice, i = -1;
    while (1) {
        std::cout << "Enter 1 to input data\nEnter 2 to stop and display\nEnter 0 to exit\nEnter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "Enter data no " << (i + 1) << ": ";
                std::cin >> arr[++i];
                system("cls");
                std::cout << (i + 1) << " data(s) entered successfully" << std::endl;
                break;
            }
            case 2: {
                hashing ob(i, arr);
                ob.hash1();
                system("cls");
                std::cout << "Printing the array after hashing" << std::endl;
                ob.displayHashedArray();
                break;
            }
            case 0: {
                std::cout << "End of program" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid input entered" << std::endl;
                break;
            }
        }
        if (choice == 2 || choice == 0)
            break;
    }
    return 0;
}