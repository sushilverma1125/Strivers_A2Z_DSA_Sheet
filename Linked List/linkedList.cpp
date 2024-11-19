#include<bits/stdc++.h>
using namespace std;

// Main definition of linked list
class Node
{   
    public:
    int data;
    Node *next;
    
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// To convert an array to a linked list
Node *convertToLinkedList(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;
    
    for(int j = 1; j < arr.size();j++) {
        Node *temp = new Node(arr[j]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

// To find out length of linked list
int lengthOfLinkedList(Node *head) {
    int cnt = 0;
    Node *temp = head;
    while(temp) {
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

int main()
{
    Node *x = new Node(2); 
    cout << x->data << endl; // OUTPUT: 2

    vector<int> arr = {12, 3, 4, 5, 6, 7};
    Node *y = convertToLinkedList(arr);
    cout << y -> data << endl; // OUTPUT: 12
    
    // To traverse the linked list
    Node *temp = head;
    int cnt = 0;
    while(temp ) {
        cout << temp -> data;
        if(temp -> next != NULL) {
            cout << " -> ";
        }
        temp = temp -> next;
        cnt++;
    }

    cout << endl << "Length of linked list is: " << lengthOfLinkedList(head);

    return 0;
}
