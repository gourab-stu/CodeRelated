#include<iostream>

struct node {
    int data;
    node *link;
};

class cl {
public:
    node* insert(int list[], int size) {
        int i;
        node* head = new node, *temp = head;
        for (i = 0; i < (size - 1); i++) {
            temp->data = list[i];
            temp->link = new node;
            temp = temp->link;
        }
        temp->data = list[i];
        temp->link = nullptr;
        return head;
    }

    int findMiddle(node* head) {
        node *fast = head, *slow = head;
        while ((fast != nullptr) && (fast->link != nullptr)) {
            fast = fast->link->link;
            slow = slow->link;
        }
        return slow->data;
    }

    void display(node* head) {
        while (head->link != nullptr) {
            std::cout << head->data << " -> ";
            head = head->link;
        }
        std::cout << head->data << std::endl;
    }
};

int main() {
    int i, size = 3, list[] = {1, 2, 3};
    cl ob;
    node *head = ob.insert(list, size);
    ob.display(head);
    std::cout << "middle = " << ob.findMiddle(head) << std::endl;
    return 0;
}