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

void search(struct node *root, char ch)
{
    if (root != NULL)
    {
        if (root->data == ch)
            printf("%c has been found\n", ch);
        search(root->left, ch);
        search(root->right, ch);
    }
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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%c", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%c", root->data);
    }
}

void main()
{
    struct node *root, *temp;
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

    search(root, 'C');
}