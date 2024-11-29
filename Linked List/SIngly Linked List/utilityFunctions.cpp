// utilityFunctions.cpp
#include <iostream>
#include <string>
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
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

// Function to find the length of the linked list
int lengthOfLinkedList(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Function to search for an element in the linked list
string searchElement(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val) {
            return "found";
        }
        temp = temp->next;
    }
    return "not found";
}

// Main function for testing utility functions
int main() {
    // Create a linked list for testing
    Node* head = new Node(12);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    print(head);

    cout << "Length of Linked List: " << lengthOfLinkedList(head) << endl;

    cout << "Element 3 is " << searchElement(head, 3) << endl;
    cout << "Element 10 is " << searchElement(head, 10) << endl;

    return 0;
}
