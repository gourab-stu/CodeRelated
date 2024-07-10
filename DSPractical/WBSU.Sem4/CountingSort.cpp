#include <iostream>
using namespace std;

int main() {
    int length, max = -99999, min = 99999;
    cout << "Enter the number of elements: ";
    cin >> length;
    int input[length];
    cout << "Enter " << length<< " array elements" << endl;
    for (int i = 0; i < length; i++) {
        cout << "a[" << i << "] = ";
        cin >> input[i];
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
    cout << "\nouput array\n";
    cout << "[ ";
    for (int i = 0; i < length; i++) {
        cout << sorted[i];
        if (i != (length - 1))
            cout << ", ";
    }
    cout << " ]" << endl;
    return 0;
}