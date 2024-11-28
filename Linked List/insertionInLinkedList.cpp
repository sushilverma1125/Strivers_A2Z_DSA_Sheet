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

Node *insertAtTail(Node *head, int ele) {
    if(head == NULL) {
        return new Node(ele);
    } 

    Node *temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    Node *newNode = new Node(ele);
    temp -> next = newNode;
    return head;
}

Node* insertAtPoisiton(Node *head, int ele, int k) {
    // Case when the head is NULL, meaning the list is empty
    if (head == nullptr) {
        if (k == 1) {
            return new Node(ele);
        } else {
            return nullptr;  // Invalid position
        }
    }

    // If k is 1, we can directly insert at the head
    if (k == 1) {
        return new Node(ele, head);
    }

    int cnt = 1;  // Start counting from the first node
    Node *temp = head;
    
    // Traverse until we reach the (k-1)th node (position before the desired insertion point)
    while (temp != nullptr && cnt < k - 1) {
        cnt++;
        temp = temp->next;
    }

    // If we've reached a valid node, insert the new element
    if (temp != nullptr) {
        Node *newNode = new Node(ele, temp->next);
        temp->next = newNode;
    } else {
        // If temp is NULL, k was greater than the length of the list, so we do nothing
        cout << "Position out of bounds" << endl;
    }

    return head;
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

    // After inserting the element at tail
    head = insertAtTail(head, 8);
    cout << "After inserting the element at tail: ";
    print(head);

    // After inserting the element at any position
    head = insertAtPoisiton(head, 9, 9);
    cout << "After inserting the element at given position: ";
    print(head);

    return 0;
}
