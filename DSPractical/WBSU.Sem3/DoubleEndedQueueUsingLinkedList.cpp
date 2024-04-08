#include <iostream>
class node {
public:
    int key;
    int data;
    node *link1;
    node() {
        key = 0;
        data = 0;
        link1 = NULL;
    }
};
class de_queue {
public:
    node *head;
    de_queue() {
        head = NULL;
    }
    int check(int n) {
        node *ptr = head;
        while(ptr != NULL) {
            if(ptr->key == n)
                return 1;
            ptr = ptr->link1;
        }
        return 0;
    }
    void queue(node *n) {
        if(head == NULL)
            head = n;
        else {
            if(check(n->key))
                std::cout << "THIS KEY IS ALREADY EXIST...TRY WITH ANOTHER KEY .." << std::endl;
            else {
                node *ptr = head;
                while(ptr != NULL) {
                    if(ptr->link1 == NULL) {
                        ptr->link1 = n;
                        break;
                    }
                    ptr = ptr->link1;
                }
            }
        }
    }
    void stenqueue(node *n) {
        if(head == NULL)
            head = n;
        else {
            if(check(n->key))
                std::cout << "THIS KEY IS ALREADY EXIST...TRY WITH ANOTHER KEY .." << std::endl;
            else {
                n->link1 = head;
                head = n;
                std::cout << "INSERT A DATA SUCCESSFULLY FROM FRONT...." << std::endl;
            }
        }
    }
    void lastenqueu(node *n) {
        if(head == NULL)
            head = n;
        else {
            if(check(n->key))
                std::cout << "THIS KEY IS ALREADY EXIST...TRY WITH ANOTHER KEY .." << std::endl;
            else {
                node *ptr = head;
                while(ptr != NULL) {
                    if(ptr->link1 == NULL) {
                        ptr->link1 = n;
                        break;
                    }
                    ptr = ptr->link1;
                }
                std::cout << "INSERT DATA SUCCESSFULLY FROM REAR ...." << std::endl;
            }
        }
    }
    void stdqueue() {
        if(head == NULL)
            std::cout << "THE QUEUE IS EMPTY ...." << std::endl;
        else {
            head = head->link1;
            std::cout << "DELETE AN ELEMENT SUCCESSFULLY FROM FRONT ...." << std::endl;
        }
    }
    void lastdqueue() {
        if(head == NULL)
            std::cout << "THE QUEUE IS EMPTY........." << std::endl;
        else {
            node *ptr = head;
            node *ptr1 = NULL;
            while(ptr->link1 != NULL) {
                ptr1 = ptr;
                ptr = ptr->link1;
            }
            ptr1->link1 = NULL;
            std::cout << "DELETE AN ELEMENT SUCCESSFULLY FROM REAR..." << std::endl;
        }
    }
    void display() {
        if(head == NULL)
            std::cout << "THE QUEUE IS EMPTY ...." << std::endl;
        else {
            node *ptr = head;
            while(ptr != NULL) {
                std::cout << "(" << ptr->key << "," << ptr->data << ")->";
                ptr = ptr->link1;
            }
        }
    }
};
int main() {
    de_queue ob;
    int opt = 0;
    do {
        std::cout << "\nPRESS 0 TO EXIT ...." << std::endl;
        std::cout << "PRESS 1 TO INSERT DATA IN QUEUE ....." << std::endl;
        std::cout << "PRESS 2 TO ENQUEUE AT FIRST ...." << std::endl;
        std::cout << "PRESS 3 TO ENQUEUE AT LAST......" << std::endl;
        std::cout << "PRESS 4 TO DEQUEUE AT FIRST......" << std::endl;
        std::cout << "PRESS 5 TO DEQUEUE AT LAST......" << std::endl;
        std::cout << "PRESS 6 TO DISPLAY......" << std::endl;
        std::cout << "ENTER CHOICE: ";
        std::cin >> opt;
        node *n = new node();
        switch(opt) {
            case 0:
                break;
            case 1:
                std::cout << "ENTER THE KEY OF THE DATA ->" << std::endl;
                std::cin >> n->key;
                std::cout << "ENTER THE DATA ->" << std::endl;
                std::cin >> n->data;
                ob.queue(n);
                break;
            case 2:
                std::cout << "ENTER THE KEY OF THE DATA ->" << std::endl;
                std::cin >> n->key;
                std::cout << "ENTER THE DATA ->" << std::endl;
                std::cin >> n->data;
                ob.stenqueue(n);
                break;
            case 3:
                std::cout << "ENTER THE KEY OF THE DATA ->" << std::endl;
                std::cin >> n->key;
                std::cout << "ENTER THE DATA ->" << std::endl;
                std::cin >> n->data;
                ob.lastenqueu(n);
                break;
            case 4:
                ob.stdqueue();
                break;
            case 5:
                ob.lastdqueue();
                break;
            case 6:
                ob.display();
                break;
            default:
                std::cout << "...............ERROR..............." << std::endl;
                break;
        }
    } while(opt != 0);
    return 0;
}