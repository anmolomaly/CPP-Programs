#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DLL {
    Node *head, *tail;
public:
    DLL() : head(nullptr), tail(nullptr) {}
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) head = tail = newNode;
        else { tail->next = newNode; newNode->prev = tail; tail = newNode; }
    }
    void deleteFront() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr; else tail = nullptr;
        delete temp;
    }
    void displayReverse() {
        Node* temp = tail;
        while (temp) { cout << temp->data << " "; temp = temp->prev; }
        cout << "\n";
    }
};

int main() {
    DLL list;
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.deleteFront();
    list.displayReverse(); // Output: 30 20
    return 0;
}