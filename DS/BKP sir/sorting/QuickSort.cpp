#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>

struct node {
    long data;
    struct node *link;
};

class Stack {
    struct node *top, *temp;
    long len;

public:
    Stack() {
        top = NULL;
        temp = NULL;
        len = 0;
    }

    void push(long data) {
        temp = new node;
        if(temp == NULL)
            printf("Memory cannot be allocated\n");
        else {
            temp->link = top;
            top = temp;
        }
        struct node* temp1 = top;
        len = 0;
        while(temp1 != NULL) {
            len++;
            temp1 = temp1->link;
        }
    }

    long pop() {
        long value = NULL;
        if(top != NULL) {
            temp = top;
            top = top->link;
            value = temp->data;
            free(temp);
        }
        struct node* temp1 = top;
        len = 0;
        while(temp1 != NULL) {
            len++;
            temp1 = temp1->link;
        }
        return value;
    }
};

class cl {
public:
    void swap(long &a, long &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    void randomInput(long arr[], long size) {
        time_t t1;
        srand((unsigned)time(&t1));
        for(int i = 0; i < size; i++) 
            arr[i] = rand();
    }

    long partition(long arr[], long beginning, long ending) {
        // long i;
        // if(phase == 0) {
        //     // right to left scanning
        //     for(i = (size - 1); i >= 0 && arr[i] > arr[pivot_index]; i--) {}
        // } else if(phase == 1) {
        //     // left to right scanning
        //     for(i = 0; i < size && arr[i] < arr[pivot_index]; i++) {}
        // }
        // return i;
        long left, right, temp, pivot, flag;
        pivot = left = beginning;
        right = ending;
        flag = 0;
        while(flag != 0) {
            while((arr[pivot] <= arr[right]) && (pivot != right)) {
                right--;
            }
            if(pivot == right)
                flag = 1;
            else if(arr[pivot] > arr[right]) {}
        }
    }

    void QuickSort(long arr[], long beginning, long ending) {
        // long pivot_index = 0, swapping_index, phase = 0, lower_index, higher_index;
        // Stack lower, higher;
        // /*some kind of loop*/ {
        //     lower_index = lower.pop();
        //     higher_index = higher.pop();
        //     /*some kind of loop*/ {
        //         swapping_index = scan(input, pivot_index, phase, size);
        //         phase = !phase;
        //         if(swapping_index != pivot_index) {
        //             swap(input[swapping_index], input[pivot_index]);
        //             pivot_index = swapping_index;
        //         }
        //     }
        //     output[pivot_index] = input[pivot_index];
        //     lower.push(0);
        // }
        int pivot;
        if(beginning < ending) {
            pivot = partition(arr, beginning, ending);
            QuickSort(arr, (pivot - 1), ending);
            QuickSort(arr, (pivot + 1), ending);
        }
    }
};

int main() {
    cl ob;
    long size;
    printf("Enter the size of random inputs: ");
    scanf("%ld", &size);
    long* input = new long[size];
    long* output = new long[size];
    ob.randomInput(input, size);
    auto start_time = std::chrono::high_resolution_clock::now();
    std::cout << "Number of comparisons in Quick Sort is: " << ob.QuickSort(input, output, size) << std::endl;
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;
    double runtime_seconds = duration.count();
    std::cout << "[Done] exited in " << runtime_seconds << " seconds" << std::endl;
    return 0;
}