#include <iostream>

class CountingSort {
public:
    void countingSort(int input[], int length) {
        int max = -99999, min = 99999, i;
        for (int i = 0; i < length; i++) {
            if (input[i] > max) {
                max = input[i];
            }
            if (input[i] < min) {
                min = input[i];
            }
        }
        int countingArrayLength = max - min + 1;
        int countingArray[countingArrayLength], sorted[length];
        for (int i = 0; i < countingArrayLength; i++) {
            countingArray[i] = 0;
        }
        for (int i = 0; i < length; i++) {
            countingArray[input[i] - min]++;
        }
        for (int i = 1; i < countingArrayLength; i++) {
            countingArray[i] = countingArray[i] + countingArray[i - 1];
        }
        for (int i = 0; i < length; i++) {
            sorted[--countingArray[input[i] - min]] = input[i];
        }
    }

    void display(int array[], int length) {
        std::cout << "[ ";
        for (int i = 0; i < length; i++) {
            std::cout << array[i];
            if (i != (length - 1))
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
};

int main() {
    CountingSort ob;
    int length;
    std::cout << "Enter the number of elements: ";
    std::cin >> length;
    int* array = new int[length];
    std::cout << "Enter " << length << " array elements" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> array[i];
    }
    ob.countingSort(array, length);
    std::cout << "sorted array" << std::endl;
    ob.display(array, length);
    return 0;
}