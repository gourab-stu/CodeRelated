#include<iostream>

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL, *temp;

void push() {
    temp = new node;
    if (temp == NULL)
        std::cout << "Memory cannot be allocated\n";
    else {
        std::cout << "Enter data to push: ";
        std::cin >> temp->data;
        temp->link = top;
        std::cout << "Value pushed";
        top = temp;
    }
}

void pop() {
    if (top == NULL)
        std::cout << "Stack Underflow";
    else {
        temp = top;
        top = top->link;
        std::cout << "Popped value = " << temp->data;
        free(temp);
    }
}

void display() {
    temp = top;
    if (temp == NULL)
        std::cout << "Empty Stack";
    else {
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->link;
        }
    }
}

int main() {
    std::cout << "\t1. push element\n\t2. pop element\n\t3. display stack\n\t4. exit\n";
    while(1) {
        std::cout << "\nEnter choice : ";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            std::cout << "\nThe Stack is\n";
            display();
            break;
        case 4:
            std::cout << "\nEnd of program\n";
            break;
        default:
            std::cout << "\nInvalid input\n";
        }
        if(choice == 4)
            break;
    }
    return 0;
}