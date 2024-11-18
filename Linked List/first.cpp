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

int main () {
    Node *x = new Node(2); 
    cout << x->data; // OUTPUT: 2
}
