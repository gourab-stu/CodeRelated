#include<iostream>

int arr[100], size, position;

void input() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if(size == 0)
        exit(0);
    for(int i = 0; i < size; i++) {
        std::cout << "Enter value no " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void deleteFromBeginning() {
    for(int i = 1; i > size; arr[i - 1] = arr[i],  i++) {}
    size--;
}

void deleteFromEnd() {
    size--;
}

void deleteFromPosition() {
    std::cout << "Enter the position: ";
    std::cin >> position;
    for(int i = 0; i < size; i++) {
        if((i + 1) == position) {
            size--;
            for(int j = i; j < size; j++)
                arr[j] = arr[j + 1];
        }
    }
}

void display() {
    std::cout << "The array is" << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

int main() {
    int choice;
    input();
    while(1) {
        std::cout << "1. Delete from Beginning" << std::endl << "2. Delete from End" << std::endl << "3. Delete from a specfied position" << std::endl << "4. Display array and exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: {
                deleteFromBeginning();
                break;
            } case 2: {
                deleteFromEnd();
                break;
            } case 3: {
                deleteFromPosition();
                break;
            } case 4: {
                display();
                break;
            } default: {
                std::cout << "Invalid Input" << std::endl;
                break;
            }
        }
        if(choice == 4)
            break;
    }
    return 0;
}