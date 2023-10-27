#include <iostream>
#include <string.h>
#define max 80
using namespace std;

class Stack {
public:
    char a[max], top;
    Stack() {
        top = -1;
    }
    void push(char n) {
        if (top == max) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        a[top] = n;
    }
    char pop() {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else {
            char poppedValue = a[top];
            top--;
            return poppedValue;
        }
    }
    void display()
    {
        if (top == -1)
            cout << "Empty Stack" << endl;
        else
            for (int i = top; i > -1; i--)
                cout << a[i] << endl;
    }
};

int length(char arr[max]) {
    int length = 0;
    while (arr[length] != '\0')
        length++;
    return length;
}

int prior(char c) {
    if ((c == '+')||(c == '-'))
        return 0;
    if ((c == '*')||(c == '/')||(c == '%'))
        return 1;
}

bool isOperator(char c) {
    if ((c == '+')||(c == '-')||(c == '*')||(c == '/')||(c == '%'))
        return true;
    else
        return false;
}

int main() {
    Stack ob1, post;
    string in;
    int i = 0, j = 0, size;
    cout << "Enter the expression: ";
    getline(cin, in);
    // size = length(in);
    ob1.push('(');
    char c;
    cin >> c;
    if (isOperator(c))
        cout << "operator\n";
    else
        cout << "not operator\n";
    return 0;
}