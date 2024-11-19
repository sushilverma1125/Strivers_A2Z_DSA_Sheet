#include <bits/stdc++.h>
using namespace std;

// Main definition of linked list
class Node {
public:
    int data;
    Node *next;

public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void print(Node *head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

// To convert an array to a linked list
Node *convertToLinkedList(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int j = 1; j < arr.size(); j++) {
        Node *temp = new Node(arr[j]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// To find out length of linked list
int lengthOfLinkedList(Node *head) {
    int cnt = 0;
    Node *temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// To check if an element is present in linked list or not
string searchElement(Node *head, int val) {
    Node *temp = head;
    while (temp) {
        if (temp->data == val) {
            return "found";
        }
        temp = temp->next;
    }
    return "not found";
}

// To delete head
Node *deleteHead(Node *head) {
    if (head == NULL) return head;

    Node *temp = head;
    head = head->next;
    free(temp);  // Free the old head node
    return head;
}

// To delete last element
Node *deleteTail(Node *head) {
    if(head == NULL || head -> next == NULL) return NULL;
    
    Node *temp = head;
    
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = nullptr;
    
    return head;
}

int main() {
    Node *x = new Node(2);
    cout << x->data << endl; // OUTPUT: 2

    vector<int> arr = {12, 3, 4, 5, 6, 7};
    Node *head = convertToLinkedList(arr);
    cout << head->data << endl; // OUTPUT: 12

    // To traverse the linked list
    Node *temp = head;
    int cnt = 0;
    while (temp) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
        cnt++;
    }
    cout << endl << "Length of linked list is: " << lengthOfLinkedList(head) << endl;

    cout << "Element " << searchElement(head, 12) << endl; // OUTPUT: Element found
    cout << "Element " << searchElement(head, 1) << endl;  // OUTPUT: Element not found

    // Delete the head
    head = deleteHead(head); // Update the head after deletion
    cout << "Linked list after deleting head is: ";
    print(head); // Correctly call the print function with updated head
    
    // Delete the tail
    head = deleteTail(head); // Update the head after deletion
    cout << "Linked list after deleting tail is: ";
    print(head); // Correctly call the print function with updated head

    return 0;
}
