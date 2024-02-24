#include <stdio.h> //THREAD library
#include <stdlib.h>
#include <pthread.h>
#define MAX_NUM 100
struct ThreadData {
    int* numbers;
    int start;
    int end;
    int sum;
};

void* calSum(void* arg) {
    struct ThreadData* data = (struct ThreadData*)arg;
    for (int i = data->start; i <= data->end; i++) {
        data->sum += data->numbers[i];
    }
    return NULL;
}

int main() {
    int n;
    int numbers[MAX_NUM];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n > MAX_NUM || n <= 0) {
        fprintf(stderr, "Invalid input for the number of elements.\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int num_threads;
    printf("Enter the number of threads: ");
    scanf("%d", &num_threads);
    if (num_threads <= 0) {
        fprintf(stderr, "Invalid input for no. of threads.\n");
        return 1;
    }
    struct ThreadData thread_data[num_threads];
    pthread_t threads[num_threads];
    int chunk_size = n / num_threads;
    int r = n % num_threads;
    int current_index = 0;
    for (int i = 0; i < num_threads; i++) {
        thread_data[i].numbers = numbers;
        thread_data[i].start = current_index;
        thread_data[i].end = current_index + chunk_size - 1 + (i < r ? 1 : 0);
        thread_data[i].sum = 0;
        if (pthread_create(&threads[i], NULL, calSum, (void*)&thread_data[i]) != 0) {
            fprintf(stderr, "Error creating thread.\n");
            return 1;
        }
        current_index = thread_data[i].end + 1;
    }
    for (int i = 0; i < num_threads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            fprintf(stderr, "Error joining thread.\n");
            return 1;
        }
    }
    int final_sum = 0;
    for (int i = 0; i < num_threads; i++) {
        final_sum += thread_data[i].sum;
    }
    printf("The sum of the numbers is: %d\n", final_sum);
    return 0;
}