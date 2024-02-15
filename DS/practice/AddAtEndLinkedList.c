#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head;
int size = 0;

void insertAtEnd(int data) {
    struct node *temp1, *temp2;
    if(size == 0) {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = data;
        head->link = NULL;
        size++;
    } else {
        temp1 = head;
        while(temp1->link != NULL) {
            temp1 = temp1->link;
        }
        temp2 = (struct node*)malloc(sizeof(struct node));
        temp2->data = data;
        temp2->link = NULL;
        temp1->link = temp2;
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
        printf("Enter 1 to add data at the end or 2 to stop and print list\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter data to insert: ");
            scanf("%d", &n);
            insertAtEnd(n);
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