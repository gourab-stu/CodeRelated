#include<iostream>

int arr[100], size, data, position;

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

void insertAtBeginning() {
    std::cout << "Enter data to insert: ";
    std::cin >> data;
    size++;
    for(int i = (size - 1); i > 0; arr[i] = arr[i - 1],  i--) {}
    arr[0] = data;
}

void insertAtEnd() {
    std::cout << "Enter data to insert: ";
    std::cin >> data;
    size++;
    arr[size - 1] = data;
}

void insertAtPosition() {
    std::cout << "Enter data to insert: ";
    std::cin >> data;
    std::cout << "Enter the position: ";
    std::cin >> position;
    for(int i = 0; i < size; i++) {
        if((i + 1) == position) {
            size++;
            for(int j = size; j >= i; j--)
                arr[j + 1] = arr[j];
            arr[i] = data;
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
        std::cout << "1. Insert at Beginning" << std::endl << "2. Insert at End" << std::endl << "3. Insert at a specfied position" << std::endl << "4. Display array and exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: {
                insertAtBeginning();
                break;
            } case 2: {
                insertAtEnd();
                break;
            } case 3: {
                insertAtPosition();
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