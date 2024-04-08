#include<iostream>
#define max 30
using namespace std;

class Stack {
    int a[max], top;

public:
    Stack() {
        top = -1;
    }
    void push(int n) {
        if(top == max) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        a[top] = n;
        cout << "Value pushed" << endl;
    }
    void pop() {
        if(top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        int n = a[top];
        top--;
        cout << "Popped value: " << n;
    }
    void display() {
        if(top == -1)
            cout << "Empty Stack" << endl;
        else
            for(int i = top; i > -1; i--)
                cout << a[i] << endl;
    }
    void peep() {
        if(top == -1)
            cout << "Empty Stack" << endl;
        else
            cout << "The topmost element of the Stack is " << a[top] << endl;
    }
};

int main() {
    Stack ob;
    while(1) {
        cout << "\nEnter 1 to push element" << endl;
        cout << "Enter 2 to pop element" << endl;
        cout << "Enter 3 to display stack" << endl;
        cout << "Enter 4 to peep" << endl;
        cout << "Enter 5 to exit" << endl;
        cout << "\nEnter choice : ";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: {
                cout << "\nEnter value for push operation : ";
                int n;
                cin >> n;
                ob.push(n);
                break;
            }
            case 2: {
                ob.pop();
                break;
            }
            case 3: {
                cout << "\nThe Stack is " << endl;
                ob.display();
                break;
            }
            case 4: {
                ob.peep();
                break;
            }
            case 5: {
                cout << "\nEnd of program" << endl;
                break;
            }
            default: {
                cout << "\nInvalid input" << endl;
            }
        }
        if(choice == 5) break;
    }
    return 0;
}
