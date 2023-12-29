#include <iostream>

struct node {
    int data;
    struct node *left, *right;
};

class DoublyLinkedList {
    struct node *head, *temp, *temp1;
    int size = 0;
public:
    int data, position;

    DoublyLinkedList() {
        head->left = NULL;
        head->data = 0;
        head->right = NULL;
    }

    int insert() {
        if (size == 0 && position == 1) {
            
        }
        temp = head;
        while (temp->right != NULL) {
            temp = temp->right;
        }
        temp1->data = data;
        return size;
    }
};

int main() {
    int choice;
    DoublyLinkedList ob;
    while (1) {
        std::cout << ob.insert() << " data present in the list" << std::endl;
        std::cout << "Enter 1 to insert data" << std::endl << "Enter 2 to delete data" << std::endl << "Enter 3 to display" << std::endl << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "Enter data to insert: ";
                std::cin >> ob.data;
                std::cout << "Enter the position to insert: ";
                std::cin >> ob.position;
                std::cout << "Data entered successfully" << std::endl;
                break;
            }
        }
    }
    return 0;
}