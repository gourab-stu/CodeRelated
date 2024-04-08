#include <iostream>
#define MAXSIZE 10
struct Stack {
    int top;
    int array[MAXSIZE];
};
class ReverseStack {
    Stack st;
public:
    ReverseStack() {
        st.top = -1;
    }
    int isFull() {
        if (st.top >= MAXSIZE - 1)
            return 1;
        else
            return 0;
    }
    int isEmpty() {
        if (st.top == -1)
            return 1;
        else
            return 0;
    }
    void push(int num) {
        if (isFull())
            std::cout << "Stack is Full...\n";
        else {
            st.array[st.top + 1] = num;
            st.top++;
        }
    }
    int pop() {
        if (isEmpty())
            std::cout << "Stack is Empty...\n";
        else
            st.top = st.top - 1;
        return st.array[st.top + 1];
    }
    void printStack() {
        if (!isEmpty()) {
            int temp = pop();
            printStack();
            std::cout << " " << temp << " ";
            push(temp);
        }
    }
    void insertAtBottom(int item) {
        if (isEmpty()) {
            push(item);
        }
        else {
            int top = pop();
            insertAtBottom(item);
            push(top);
        }
    }
    void reverse() {
        if (!isEmpty()) {
            int top = pop();
            reverse();
            insertAtBottom(top);
        }
    }
    int getSize() {
        return st.top + 1;
    }
};
int main() {
    ReverseStack ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    std::cout << "Original Stack\n";
    ob.printStack();
    ob.reverse();
    std::cout << "\nReversed Stack\n";
    ob.printStack();
    return 0;
}