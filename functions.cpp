#include <bits/stdc++.h>
using namespace std;

// pass by value - copy is passed from the main function
void doSomething1(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference - reference to that variable is passed and any changes to that variable insinde the function is done globally
void doSomething2(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething1(num);
    cout << num << endl; // output is 10, because the copy is sent to the function not by the original address
    doSomething2(num);
    cout << num << endl; // output is 20
    return 0;
}

int fib(int n) {
    if(n == 1 || n == 2) return 1;
    else {
        fib(n - 1) + fib(n - 2);
    }
}