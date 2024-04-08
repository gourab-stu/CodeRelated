// 9.10.23
// taking data from user and making, displaying, searching a linked list
#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *head, *temp, *temp1;
    head = allocate;
    int value, count;
    printf("Enter the head: ");
    scanf("%d", &head->data);
    head->link = NULL;
    // insert 5 nodes at the end
    for (int i = 0; i < 5; i++)
    {
        temp = head;
        while (temp->link != NULL)
            temp = temp->link;
        temp1 = allocate;
        printf("Enter a data: ");
        scanf("%d", &temp1->data);
        temp1->link = NULL;
        temp->link = temp1;
    }
    // display list
    printf("The linked list is\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    // linear search
    printf("\nEnter a value: ");
    scanf("%d", &value);
    temp = head;
    count = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
            count++;
        temp = temp->link;
    }
    if (count == 0)
        printf("Data not found");
    else
        printf("Value found %d times", count);
}