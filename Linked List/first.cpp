#include<bits/stdc++.h>
using namespace std;

struct Node
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
    cout << x->data;
}
