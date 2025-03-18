#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    
    DoublyLinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head) {
            head->prev = newNode;
            newNode->next = head;
        }
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        }
        std::cout << "nullptr\n";
    }
};

int main() {
    DoublyLinkedList list;
    list.insert(3);
    list.insert(5);
    list.insert(7);
    list.insert(17);
    
    list.display(); // 7 <-> 5 <-> 3 <-> nullptr
}
