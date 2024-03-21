#include<iostream>

class Sort {
    int size, arr[100];

public:
    void input() {
        std::cout << "Enter the size: ";
        std::cin >> size;
        if(size == 0)
            exit(0);
        for(int i = 0; i < size; i++) {
            std::cout << "Enter value no " << (i + 1) << ": ";
            std::cin >> arr[i];
        }
    }

    void BubbleSort() {
        for(int i = 0; i <= (size - 2); i++) {
            for(int j = 0; j <= (size - i - 2); j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void SelectionSort() {
        for(int i = 0; i <= (size - 2); i++) {
            int index = i, temp;
            for(int j = i + 1; j <= (size - 1); j++)
                if (arr[j] < arr[index])
                    index = j;
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }

    void InsertionSort() {
        int j, temp;
        arr[-1] = -999;
        for(long long i = 1; i <= size; i++) {
            j = i;
            comparison++;
            while(temp < arr[j - 1]) {
                arr[j] = arr[j - 1];
                j--;
                comparison++;
            }
            arr[j] = temp;
        }
    }

    void display() {
        std::cout << "After sorting in ascending order the array is" << std::endl;
        for(int i = 0; i < size; i++)
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
};

int main() {
    Sort ob;
    int choice;
    ob.input();
    std::cout << "\t1. Bubble Sort\n\t2. Selection Sort\n\t3. Insertion Sort" << std::endl;
    std::cout << "Enter the desired sorting method: ";
    std::cin >> choice;
    switch(choice) {
        case 1: {
            ob.BubbleSort();
            ob.display();
            break;
        }
        case 2: {
            ob.SelectionSort();
            ob.display();
            break;
        }
        case 3: {
            ob.InsertionSort();
            ob.display();
            break;
        }
        default: {
            std::cout << "INVALID OPTION" << std::endl;
        }
    }
    return 0;
}
