#include <iostream>

struct node {
    int data;
    struct node *link;
};

class RadixSortLinkedList {
public:
    void randomInput(int arr[], int size) {
        time_t t1;
        srand((unsigned)time(&t1));
        for(int i = 0; i < size; i++)
            arr[i] = rand() % 1000;
    }

    void radixSortLinkedList(int a[], int n) {
        int i, j = 1, k, r, step, count = 0, max = a[0];
        for (i = 1; i < n; i++) {
            if (max < a[i]) {
                max = a[i];
            }
        }
        while (max > 0) {
            max /= 10;
            count += 1;
        }
        for (step = 1; step <= count; step++, j *= 10) {
            node *p[10];
            for (i = 0; i < 10; i++) {
                p[i] = new node;
                p[i]->link = nullptr;
            }
            for(i = 0; i < n; i++) {
                r = (a[i] / j) % 10;
                node *temp = p[r];
                while (temp->link != nullptr) {
                    temp = temp->link;
                }
                node *temp1 = new node;
                temp1->data = a[i];
                temp1->link = nullptr;
                temp->link = temp1;
            }
            k = 0;
            for (i = 0; i < 10; i++) {
                node *temp = p[i]->link;
                while (temp != nullptr) {
                    a[k++] = temp->data;
                    temp = temp->link;
                }
            }
        }
    }

    void display(int a[], int n) {
        std::cout << "[ ";
        for (int i = 0; i < n; i++) {
            std::cout << a[i];
            if (i != (n - 1))
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
};

int main() {
    RadixSortLinkedList ob;
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];
    ob.randomInput(arr, size);
    std::cout << "The array is" << std::endl;
    ob.display(arr, size);
    ob.radixSortLinkedList(arr, size);
    std::cout << "The sorted array is" << std::endl;
    ob.display(arr, size);
    delete[] arr;
    return 0;
}
