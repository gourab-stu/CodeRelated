#include <iostream>

int main() {
    int length, max = INT_MIN, min = INT_MAX, i;
    std::cout << "Enter the number of elements: ";
    std::cin >> length;
    int input[length], sorted[length];
    std::cout << "Enter " << length << " array elements" << std::endl;
    for (i = 0; i < length; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> input[i];
    }
    for (int i = 0; i < length; i++) {
        if (input[i] > max) {
            max = input[i];
        }
        if (input[i] < min) {
            min = input[i];
        }
    }
    int countingArrayLength = max - min + 1;
    int countingArray[countingArrayLength];
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
    std::cout << "ouput array" << std::endl;
    for (i = 0; i < length; i++)
        std::cout << sorted[i] << "  ";
    std::cout << std::endl;
    return 0;
}