#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node))

struct node *front = NULL, *rear = NULL;

struct node
{
    int data;
    struct node *link;
};

void insert()
{
    struct node *temp;
    temp = allocate;
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
}

void delete()
{
    struct node *temp;
    if (front == NULL)
        printf("Queue Underflow\n");
    else
    {
        if (front == rear)
        {
            printf("Deleted data = %d\n", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
        else
        {
            temp = front;
            printf("Deleted data = %d\n", temp->data);
            front = front->link;
            free(temp);
        }
    }
}

void display()
{
    struct node *temp;
    if (front == NULL)
        printf("Empty Queue\n");
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}

void main()
{
    while (1)
    {
        printf("\nEnter 1 to insert element\n");
        printf("Enter 2 to delete element\n");
        printf("Enter 3 to display Queue\n");
        printf("Enter 4 to exit\n");
        printf("\nEnter choice : ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            printf("\nThe Stack is\n");
            display();
            break;
        case 4:
            printf("\nEnd of program\n");
            break;
        default:
            printf("\nInvalid input\n");
        }
        if (choice == 4)
            break;
    }
}