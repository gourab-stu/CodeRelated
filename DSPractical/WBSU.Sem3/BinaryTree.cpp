#include <iostream>

struct node {
    int key;
    struct node *left, *right;
};

int max(int a, int b) {
    if(a >= b)
        return a;
    else
        return b;
}

struct node* newNode(int item) {
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int key) {
    if (node == NULL)
        return newNode(key);
    else if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

bool search(struct node* root, int key) {
    if (root == NULL || root->key == key)
        return root != NULL;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}

int findSmallest(struct node* root) {
    if (root == NULL)
        return -1;
    while (root->left != NULL)
        root = root->left;
    return root->key;
}

int findLargest(struct node* root) {
    if (root == NULL)
        return -1;
    while (root->right != NULL)
        root = root->right;
    return root->key;
}

int height(struct node *root) {
    if (root == NULL)
        return 0;
    else {
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height, right_height) + 1;
    }
}

int countNodes(struct node* root) {
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeafNodes(struct node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int countNonLeafNodes(struct node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
}

void inorderTraversal(struct node* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    std::cout << root->key << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(struct node* root) {
    if (root == NULL)
        return;
    std::cout << root->key << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(struct node* root) {
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    std::cout << root->key << " ";
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node* deleteNode(struct node* root, int key) {
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            delete root;
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

void mirror(struct node* root) {
    if (root == NULL)
        return;
    struct node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirror(root->left);
    mirror(root->right);
}
void deleteTree(struct node* root) {
    if (root == NULL)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    std::cout << "Height of the BST is: " << height(root) << std::endl;
    int search_key = 40;
    if (search(root, search_key))
        std::cout << "Key " << search_key << " is present in the BST." << std::endl;
    else
        std::cout << "Key " << search_key << " is not present in the BST." << std::endl;
    std::cout << "Smallest element in BST: " << findSmallest(root) << std::endl;
    std::cout << "Largest element in BST: " << findLargest(root) << std::endl;
    std::cout << "Total nodes in BST: " << countNodes(root) << std::endl;
    std::cout << "Total leaf nodes in BST: " << countLeafNodes(root) << std::endl;
    std::cout << "Total non-leaf nodes in BST: " << countNonLeafNodes(root) << std::endl;
    std::cout << "Inorder traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;
    std::cout << "Preorder traversal: ";
    preorderTraversal(root);
    std::cout << std::endl;
    std::cout << "Postorder traversal: ";
    postorderTraversal(root);
    std::cout << std::endl;
    int delete_key = 20;
    root = deleteNode(root, delete_key);
    std::cout << "Deleted key: " << delete_key << std::endl;
    std::cout << "Inorder traversal after deletion: ";
    inorderTraversal(root);
    std::cout << std::endl;
    std::cout << "Mirror image of the BST: " << std::endl;
    mirror(root);
    std::cout << "Inorder traversal of the mirror image: ";
    inorderTraversal(root);
    std::cout << std::endl;
    deleteTree(root);
    return 0;
}