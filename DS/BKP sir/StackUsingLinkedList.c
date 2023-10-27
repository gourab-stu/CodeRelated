// 9.10.23
// making a stack using a linked list
#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL, *temp;

void push()
{
    temp = allocate;
    if (temp == NULL)
        printf("Memory cannot be allocated\n");
    else
    {
        printf("Enter data to push: ");
        scanf("%d", &temp->data);
        temp->link = top;
        printf("Value pushed");
        top = temp;
    }
}

void pop()
{
    if (pop == NULL)
        printf("Stack Underflow");
    else
    {
        temp = top;
        top = top->link;
        printf("Popped value = %d", temp->data);
        free(temp);
    }
}

void display()
{
    temp = top;
    if (temp == NULL)
        printf("Empty Stack");
    else
    {
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
        printf("\nEnter 1 to push element\n");
        printf("Enter 2 to pop element\n");
        printf("Enter 3 to display stack\n");
        printf("Enter 4 to exit\n");
        printf("\nEnter choice : ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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