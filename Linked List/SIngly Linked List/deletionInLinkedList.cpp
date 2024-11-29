#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete the head node
Node* deleteHead(Node* head) {
    if (head == nullptr) return nullptr;

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to delete the tail node
Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next && temp->next->next) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Function to delete the k-th element
Node* deleteK(Node* head, int k) {
    if (head == nullptr) return head;

    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 1;
    Node* temp = head;
    Node* prev = nullptr;

    while (temp) {
        if (cnt == k) {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}

// Function to delete a node by its value
Node* deleteByValue(Node* head, int ele) {
    if (head == nullptr) return head;

    if (head->data == ele) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while (temp) {
        if (temp->data == ele) {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Main function for testing deletion operations
int main() {
    // Create a linked list for testing
    Node* head = new Node(12);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    print(head);

    // Delete the head node
    head = deleteHead(head);
    cout << "After deleting head: ";
    print(head);

    // Delete the tail node
    head = deleteTail(head);
    cout << "After deleting tail: ";
    print(head);

    // Delete the 2nd node
    head = deleteK(head, 2);
    cout << "After deleting 2nd node: ";
    print(head);

    // Delete node with value 3
    head = deleteByValue(head, 3);
    cout << "After deleting node with value 3: ";
    print(head);

    return 0;
}
