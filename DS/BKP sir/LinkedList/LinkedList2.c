// 5.10.23
// adding nodes consecutively from the beginning
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
    struct node *head, *temp;
    head = allocate;
    head->data = 3;
    head->link = NULL;
    temp = allocate;
    temp->data = 5;
    temp->link = head;
    head = temp;
    temp = allocate;
    temp->data = 7;
    temp->link = head;
    head = temp;
    // display data
    // printf("%d\n", head->data);
    // printf("%d\n", head->link->data);
    // printf("%d\n", head->link->link->data);
    
    // loop 1: to display list
    head = temp;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}