#include <iostream>
using namespace std;

void pattern1(int n) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    /*
    Output:
        * * * * 
        * * * * 
        * * * * 
        * * * * 
    */
}

void pattern2(int n) {
	// Write your code here.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i + 1; j++) {
			cout << "*" << " ";
		} cout << endl;
	}
    /*
    Output:
        * 
        * *
        * * *
    */
}

void pattern3(int n) {
	// Write your code here
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j < i + 1; j++) {
			cout << j << " ";
		} cout << endl;
	}
    /*
    Output:
        1
        1 2 
        1 2 3
    */
}

void pattern4(int n) {
	// Write your code here
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << i << " ";
    } cout << endl;
  }
/*
    Output: 
        1
        2 2 
        3 3 3
*/
}

void pattern5(int n) {
	// Write your code here.
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    /*
    Output: 
        * * *
        * *
        *
    */
}



int main()
{
    int n = 4;
    pattern1(n);


    return 0;
}