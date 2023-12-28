#include <iostream>

class hashing {
    int arr[10], newArr[10], size;
public:
    hashing(int temp, int tempArr[]) {
        size = temp;
        std::copy(tempArr,tempArr + size, arr);
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

    int power(int p, int temp = 1) {
        while (p > 0) {
            temp = 10 * temp;
            p--;
        }
        return temp;
    }

    void hash1() {
        int newSize = power(numberOfDigits(arr[maxValueInArray(arr)]) - 1),  r;
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
    int arr[10], choice, i = 0;
    while (1) {
        std::cout << "Enter 1 to input data\nEnter 2 to stop and display\nEnter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "Enter data no " << (i + 1) << ": ";
                std::cin >> arr[i];
                system("clear");
                std::cout << (++i) << " data(s) entered successfully" << std::endl;
                break;
            }
            case 2: {
                if (i == 0)
                    break;
                hashing ob(i, arr);
                ob.hash1();
                system("clear");
                std::cout << "Printing the array after hashing" << std::endl;
                ob.displayHashedArray();
                break;
            }
            default: {
                system("clear");
                std::cout << "Invalid input entered" << std::endl;
                break;
            }
        }
        if (choice == 2) {
            std::cout << "End of program" << std::endl;
            break;
        }
    }
    return 0;
}