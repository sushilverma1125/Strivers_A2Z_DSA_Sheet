#include <iostream>
using namespace std;

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

struct Node
{
    int val;
    Node *next;
};

// Function to traverse and print the elements of the linked list
void printLinkedList(Node *head)
{

    // Start from the head of the linked list
    Node *curr = head;

    while (curr != NULL)
    {
        // Print the data of the current node
        cout << curr->val << " ";
        // Move to the next node
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->val = 1;
    first->val = 2;
    second->val = 3;

    head->next = first;
    first->next = second;

    printLinkedList(head);

    // Memory cleanup (free allocated memory)
    delete head;
    delete first;
    delete second;

    return 0;
}