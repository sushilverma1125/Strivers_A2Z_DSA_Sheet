#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    Node *x = new Node(2); 
    cout << x->data << endl; // OUTPUT: 2

    vector<int> arr = {12, 3, 4, 5, 6, 7};
    Node *y = convertToLinkedList(arr);
    cout << y -> data << endl; // OUTPUT: 12
    
    // To traverse the linked list
    Node *temp = y;
    while(temp != NULL) {
        cout << temp -> data << "->";
        temp = temp -> next;
    }

    return 0;
}
