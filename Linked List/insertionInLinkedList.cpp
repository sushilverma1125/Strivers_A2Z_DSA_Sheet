#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    Node (int data1, Node* next1) {
        data = data1;
        next = next1;
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

// Function to convert an array to a linked list
Node* convertToLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *insertAtHead(Node *head, int ele) {
    Node *temp = new Node(ele, head);
    return temp;
}

// Main function for testing createLinkedList functionality
int main() {
    vector<int> arr = {12, 3, 4, 5, 6, 7};
    Node* head = convertToLinkedList(arr);

    // Print the linked list
    cout << "Linked List: ";
    print(head);

    // After inserting the element at head
    head = insertAtHead(head, 11);
    cout << "After inserting the element at head: ";
    print(head);

    return 0;
}
