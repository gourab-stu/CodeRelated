#include <iostream>

struct node {
    char data;
    struct node *lc, *rc;
};

void preorder(struct node *root) {
    if(root != NULL) {
        std::cout << root->data << " ";
        preorder(root->lc);
        preorder(root->rc);
    }
}

void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->lc);
        std::cout << root->data << " ";
        inorder(root->rc);
    }
}

void postorder(struct node *root) {
    if(root != NULL) {
        postorder(root->lc);
        postorder(root->rc);
        std::cout << root->data << " ";
    }
}

int main() {
    struct node *root, *temp;
    root = new node;
    std::cout << "Enter root data: ";
    std::cin >> root->data;
    root->lc = NULL;
    root->rc = NULL;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->lc = temp;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->rc = temp;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->lc->lc = temp;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->lc->rc = temp;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->rc->lc = temp;

    temp = new node;
    std::cout << "Enter temp data: ";
    std::cin >> temp->data;
    temp->lc = NULL;
    temp->rc = NULL;
    root->rc->rc = temp;

    std::cout << std::endl << "Preorder traversal:\t";
    preorder(root);

    std::cout << std::endl << "Inorder traversal:\t";
    inorder(root);

    std::cout << std::endl << "Postorder traversal:\t";
    postorder(root);

    std::cout << std::endl;
    return 0;
}