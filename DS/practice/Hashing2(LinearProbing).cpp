#include <iostream>

int arr[10], size;

void hashWithLinearProbing() {
    int n, r;
    for(int i = 0; i < 10; arr[i] = -999, i++)
    for(int i = 0; i < size; i++) {
        std::cout << "Enter value no " << (i + 1) << ": ";
        std::cin >> n;
        r = n % 10;
        while(arr[r] != -999) {
            r++;
            if(r > 9) r = 0;
        }
        arr[r] = n;
    }
}

void display() {
    std::cout << "The array is" << std::endl;
    for(int i = 0; i < 10; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

int main() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    hashWithLinearProbing();
    display();
    return 0;
}