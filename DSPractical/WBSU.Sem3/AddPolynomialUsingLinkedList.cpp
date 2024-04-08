#include <iostream>
class node {
public:
    int degree;
    int data;
    node *link1;
    node() {
        degree = 0;
        data = 0;
        link1 = NULL;
    }
};
class poly {
public:
    node *head;
    poly() {
        head = NULL;
    }
    int check(int k) {
        node *ptr = head;
        while(ptr != NULL) {
            if(ptr->degree == k)
                return 1;
            ptr = ptr->link1;
        }
        return 0;
    }
    void append(node *n) {
        if(head == NULL)
            head = n;
        else {
            if(check(n->degree))
                std::cout << "THE DGREE IS ALREADY EXIST TRY WITH ANOTHER ....." << std::endl;
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
    poly operator+(poly ob1) {
        node *ptr = head;
        node *ptr1 = head;
        node *ptr3 = NULL;
        node *ptr4 = head;
        node *ptr5 = head;
        node *ptr6 = head;
        while(ptr1->link1 != NULL)
            ptr1 = ptr1->link1;
        ptr1->link1 = ob1.head;
        for(ptr = head; ptr != NULL; ptr = ptr->link1) {
            ptr3 = ptr->link1;
            while(ptr3 != NULL) {
                if(ptr3->degree == ptr->degree)
                    ptr->data = ptr->data + ptr3->data;
                ptr3 = ptr3->link1;
            }
        }
        while(ptr4 != NULL) {
            ptr6 = ptr4;
            ptr5 = ptr4->link1;
            while(ptr5 != NULL) {
                if(ptr4->degree == ptr5->degree)
                    ptr6->link1 = ptr5->link1;
                ptr6 = ptr5;
                ptr5 = ptr5->link1;
            }
            ptr4 = ptr4->link1;
        }
        poly obj;
        obj.head = ptr1;
        return obj;
    }
    void display() {
        if(head == NULL)
            std::cout << ".........EMPTY............" << std::endl;
        else {
            node *ptr = head;
            while(ptr != NULL) {
                std::cout << "(" << ptr->data << " x^" << ptr->degree << ")";
                if(ptr->link1 != NULL)
                    std::cout << " + ";
                ptr = ptr->link1;
            }
            std::cout << "= 0 ";
        }
    }
};
int main() {
    int opt = 0;
    poly ob;
    poly ob1;
    do {
        std::cout << "\nPRESS 0 TO EXIT...." << std::endl;
        std::cout << "PRESS 1 TO APPEND NODE FOR 1st POLYNOMIAL..........." << std::endl;
        std::cout << "PRESS 2 TO APPEND NODE FOR 2nd POLYNOMIAL..........." << std::endl;
        std::cout << "PRESS 3 TO DISPLAY 1st POLYNOMIAL......" << std::endl;
        std::cout << "PRESS 4 TO DISPLAY 2nd POLYNOMIAL......" << std::endl;
        std::cout << "PRESS 5 TO ADD TWO POLYNOMIALS........" << std::endl;
        std::cout << "PRESS 6 TO DISPLAY THE RESULT........" << std::endl;
        std::cout << "ENTER CHOICE: ";
        std::cin >> opt;
        node *n = new node();
        switch(opt) {
            case 0:
                break;
            case 1:
                std::cout << "ENTER THE DEGREE....." << std::endl;
                std::cin >> n->degree;
                std::cout << "ENTER THE DATA......" << std::endl;
                std::cin >> n->data;
                ob.append(n);
                break;
            case 2:
                std::cout << "ENTER THE DEGREE....." << std::endl;
                std::cin >> n->degree;
                std::cout << "ENTER THE DATA......" << std::endl;
                std::cin >> n->data;
                ob1.append(n);
                break;
            case 3:
                ob.display();
                break;
            case 4:
                ob1.display();
                break;
            case 5:
                ob = ob + ob1;
                break;
            case 6:
                ob.display();
                break;
            default:
                std::cout << ".........ERROR........" << std::endl;
                break;
        }
    } while(opt != 0);
    return 0;
}