#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head;
int size = 0;

void insertAtBeginning(int data) {
    struct node *temp;
    if(size == 0) {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = data;
        head->link = NULL;
        size++;
    } else {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = head;
        head = temp;
        size++;
    }
}

void display() {
    struct node *temp;
    printf("The list is\n");
    temp = head;
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

int main() {
    int choice, n;
    while (1) {
        printf("Enter 1 to add data at the beginning or 2 to stop and print list\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter data to insert: ");
            scanf("%d", &n);
            insertAtBeginning(n);
            system("clear");
            printf("Data entered successfully\n");
            printf("%d data present in the list\n", size);
        } else if (choice == 2) {
            display();
            break;
        } else {
            system("clear");
            printf("Invalid choice\n");
            printf("%d data present in the list\n", size);
        }
    }
    free(head);
    return 0;
}