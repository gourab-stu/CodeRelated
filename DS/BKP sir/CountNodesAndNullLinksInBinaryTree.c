// 18.10.23

#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node));

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

int countNode(struct node *root)
{
    if (root != NULL)
        return (1 + countNode(root->left) + countNode(root->right));
    else
        return 0;
}

int countNullLink(struct node *root)
{
    if (root != NULL)
        return (0 + countNullLink(root->left) + countNullLink(root->right));
    else
        return 1;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%c", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void main()
{
    struct node *root, *temp;
    int value1, value2;

    // creating root node
    root = allocate;
    root->data = 'A';
    root->left = NULL;
    root->right = NULL;

    // creating left child of root=B
    temp = allocate;
    temp->data = 'B';
    temp->left = NULL;
    temp->right = NULL;
    root->left = temp;

    // creating right child of root=C
    temp = allocate;
    temp->data = 'C';
    temp->left = NULL;
    temp->right = NULL;
    root->right = temp;

    // creating left child of B=D
    temp = allocate;
    temp->data = 'D';
    temp->left = NULL;
    temp->right = NULL;
    root->left->left = temp;

    // creating right child of B=E
    temp = allocate;
    temp->data = 'E';
    temp->left = NULL;
    temp->right = NULL;
    root->left->right = temp;

    // creating left child of C=F
    temp = allocate;
    temp->data = 'F';
    temp->left = NULL;
    temp->right = NULL;
    root->right->left = temp;

    // creating right child of C=G
    temp = allocate;
    temp->data = 'G';
    temp->left = NULL;
    temp->right = NULL;
    root->right->right = temp;

    printf("Preorder traversal: ");
    preorder(root);

    value1 = countNode(root);
    printf("\nTotal number of node is: %d", value1);

    value2 = countNullLink(root);
    printf("\nTotal number of null link is: %d", value2);
}