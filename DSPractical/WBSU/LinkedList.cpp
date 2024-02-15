#include<iostream>
#include<stdlib.h>
#define readData std::cout << "Enter data to insert: ";std::cin >> data
#define readPosition std::cout << "Enter position: ";std::cin >> position

struct node {
    int data;
    struct node *link;
};

class LinkedList {
    struct node *head;
    int size, data, position;
public:
    LinkedList(){
        size = 0;
        data = 0;
        position = 0;
    }

    int check() {
        return size;
    }

    int insertAtBeginning() {
        readData;
        // when the list is empty and we are creating head node
        if(size == 0) {
            head = new node;
            head->data = data;
            head->link = NULL;
            size++;
        }
        // when adding a node at the beginning of an existing list
        else {
            struct node *temp;
            temp = new node;
            temp->data = data;
            temp->link = head;
            head = temp;
            size++;
        }
        return size;
    }

    int insertAtEnd() {
        readData;
        struct node *temp, *temp1;
        temp = head;
        while(temp->link != NULL) {
            temp = temp->link;
        }
        temp1 = new node;
        temp1->data = data;
        temp1->link = NULL;
        temp->link = temp1;
        size++;
        return size;
    }

    int insert() {
        readPosition;
        // if position is 1
        if(0 < position < 2)
            insertAtBeginning();
        else {
            if(position == (size + 1))
                insertAtEnd();
            else if(0 < position < size) {
                int i = 1;
                struct node *temp;
                temp = head;
                while(i != (position - 1)) {
                    temp = temp->link;
                    i++;
                }
                struct node *temp1;
                temp1 = new node;
                temp1->data = data;
                temp1->link = NULL;
                temp->link = temp1;
                size++;
            } else
                std::cout << "INVALID POSITION" << std::endl;
        }
        return size;
    }

    int deleteFromBeginning() {
        if(size == 0)
            std::cout << "List is empty" << std::endl;
        else {
            struct node *temp;
            temp = head;
            head = head->link;
            temp->link = NULL;
            int deleted = temp->data;
            std::cout << "Deleted data: " << deleted << std::endl;
            size--;
        }
        return size;
    }

    int deleteFromEnd() {
        if(size == 0)
            std::cout << "List is empty" << std::endl;
        else {
            struct node *temp, *temp1;
            temp = head;
            while(temp->link->link != NULL) {
                temp = temp->link;
            }
            temp1 = temp->link;
            temp->link = NULL;
            int deleted = temp1->data;
            std::cout << "Deleted data: " << deleted << std::endl;
            size--;
        }
        return size;
    }

    int deletion() {
        readPosition;
        if(0 < position < 2)
            deleteFromBeginning();
        else {
            if(position == size)
                deleteFromEnd();
            else if(0 < position < size) {
                int i = 1;
                struct node *temp;
                temp = head;
                while(i != position) {
                    temp = temp->link;
                    i++;
                }
                struct node *temp1, *temp2;
                temp1 = temp->link;
                temp2 = temp1->link;
                temp->link = temp2;
                temp1->link = NULL;
                int deleted = temp1->data;
                std::cout << "Deleted data: " << deleted << std::endl;
                size--;
            } else
                std::cout << "INVALID POSITION" << std::endl;
        }
        return size;
    }

    void reverse() {
        struct node *temp, *tail, *prev = NULL, *current = head;
        while(current != NULL) {
            temp = current->link;
            current->link = prev;
            prev = current;
            current = temp;
        }
        head = prev;
        std::cout << "The list is now reversed" << std::endl;
    }

    void display() {
        std::cout << "The list is: ";
        struct node *temp;
        temp = head;
        while(temp != NULL) {
            std::cout << temp->data << " -> ";
            temp = temp->link;
        }
        std::cout << "NULL" << std::endl;
    }

    ~LinkedList() {
        free(head);
    }
};

int main() {
    LinkedList ob;
    int choice, n;
    std::cout << "\t1. Insert at beginning\n\t2. Insert at end\n\t3. Insert at specifed position\n\t4. Delete data\n\t5. Reverse list\n\t6. Print list\n\t7. Exit" << std::endl;
    while(1) {
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: {
                ob.insertAtBeginning();
                std::cout << ob.check() << " data present in the list" << std::endl;
                break;
            }
            case 2: {
                ob.insertAtEnd();
                std::cout << ob.check() << " data present in the list" << std::endl;
                break;
            }
            case 3: {
                ob.insert();
                std::cout << ob.check() << " data present in the list" << std::endl;
                break;
            }
            case 4: {
                ob.deletion();
                std::cout << ob.check() << " data present in the list" << std::endl;
                break;
            }
            case 5: {
                ob.reverse();
                std::cout << ob.check() << " data present in the list" << std::endl;
                break;
            }
            case 6: {
                ob.display();
                break;
            }
            case 7: {
                exit(1);
                break;
            }
            default: {
                std::cout << "Invalid choice" << std::endl;
                std::cout << ob.check() << " data present in the list" << std::endl;
            }
        }
    }
    std::cout << "END OF PROGRAM" << std::endl;
    return 0;
}