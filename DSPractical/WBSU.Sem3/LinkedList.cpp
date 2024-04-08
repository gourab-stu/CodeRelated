#include <iostream>

struct node {
    int data;
    node *next;
};

class linked_list {
private:
    node *head, *tail;
public:
    linked_list() {
        head = NULL;
        tail = NULL;
    }
    void add_node(int n) {
        int x;
        for(int i = 1; i <= n; i++) {
            std::cout << "\nDATA" << i << "=";
            std::cin >> x;
            node *tmp = new node;
            tmp->data = x;
            tmp->next = NULL;
            if(head == NULL) {
                head = tmp;
                tail = tmp;
            }
            else {
                tail->next = tmp;
                tail = tail->next;
            }
        }
    }
    node *gethead() {
        return head;
    }
    void Search(node *head_ref, int key) {
        node *current = head_ref;
        int c;
        bool Flag = false;
        while(current != NULL) {
            if(current->data == key) {
                std::cout << "\nSearch Successful !!!";
                Flag = true;
                break;
            }
            else {
                current = current->next;
            }
            c++;
        }
        if(Flag == true) {
            c++;
            std::cout << "\n"
                 << key << " is in Position " << c;
        }
        else {
            std::cout << "\n"
                 << key << " is not found";
        }
    }
    void Insert(int pos, int x, node *head_ref) {
        node *tmp = new node;
        tmp->data = x;
        tmp->next = NULL;
        node *ptr = NULL;
        ptr = head_ref;
        if(pos == 1) {
            head = tmp;
            tmp->next = ptr;
        }
        else {
            for(int i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            node *ptr1 = NULL;
            ptr1 = ptr->next;
            ptr->next = tmp;
            tmp->next = ptr1;
        }
    }
    void Deletion(int pos, node *head_ref) {
        if(pos == 1) {
            node *temp1 = head_ref;
            head = head_ref->next;
            delete temp1;
        }
        else {
            node *temp = head_ref;
            for(int i = 0; i < pos - 2; i++) {
                if(temp->next != NULL) {
                    temp = temp->next;
                }
            }
            node *temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
        }
    }
    void reverse(node *head_ref, int n) {
        int i;
        node *pre, *in, *next;
        pre = head_ref;
        in = NULL;
        next = NULL;
        while(pre != NULL) {
            next = pre->next;
            pre->next = in;
            in = pre;
            pre = next;
        }
        head = in;
    }
    linked_list operator+(linked_list ob2) {
        linked_list ob3;
        node *link = gethead();
        while(link->next != NULL) {
            link = link->next;
        }
        link->next = ob2.gethead();
        ob3.head = head;
        std::cout << "gethead() = " << gethead() << ", head = " << head << std::endl;
        return ob3;
    }
    void display(node *head_ref) {
        if(head_ref == NULL) {
            std::cout << "NULL" << std::endl;
        }
        else {
            std::cout << head_ref->data << " ";
            display(head_ref->next);
        }
    }
    ~linked_list() {
        std::cout << "\nThank U...";
    }
};
int main() {
    std::cout << "\n******PRESENTING LINKEDLIST OPERATIONS******\n";
    std::cout << "\nLet's create linked lists:";
    linked_list a;
    linked_list b;
    linked_list c;
    node *head;
    int n1;
    std::cout << "\nEnter the Number of elements u want to insert in 1st linkedlist: ";
    std::cin >> n1;
    a.add_node(n1);
    std::cout << "\nNOW the linked list is:\n";
    a.display(a.gethead());
    while(1) {
        std::cout << "\n1.Search An Element\n2.Insertion\n3.Delition\n4.Reversing\n5.Concatenate\n6.exit";
        int ch;
        std::cout << "\nPlease enter ur Choice: ";
        std::cin >> ch;
        switch(ch) {
            case 1:
                int y;
                std::cout << "\nEnter the Element to search: ";
                std::cin >> y;
                a.Search(a.gethead(), y);
                break;
            case 2:
                int posI, x;
                std::cout << "\nEnter the position to insert element: ";
                std::cin >> posI;
                std::cout << "\nEnter the NEW DATA to insert: ";
                std::cin >> x;
                a.Insert(posI, x, a.gethead());
                std::cout << "\nNOW the UPDATED linked list AFTER insertion:\n";
                a.display(a.gethead());
                break;
            case 3:
                int pos;
                std::cout << "\nEnter the position u want to DELETE: ";
                std::cin >> pos;
                a.Deletion(pos, a.gethead());
                std::cout << "\nNOW the UPDATED linked list AFTER deletion:\n";
                a.display(a.gethead());
                break;
            case 4:
                a.reverse(a.gethead(), n1);
                std::cout << "\nThe REVERSED linked list is:\n";
                a.display(a.gethead());
                break;
            case 5:
                int n2;
                std::cout << "\nnumber of elements u want to insert in 2nd linkedlist: ";
                std::cin >> n2;
                b.add_node(n2);
                c = a + b;
                std::cout << "\nPresenting the Merged linked list\n";
                c.display(c.gethead());
                break;
            case 6:
                std::cout << "END";
                break;
            default:
                std::cout << "Sorry! Invalid Choice ";
                break;
            }
            if(ch == 6)
                break;
    }
    return 0;
}