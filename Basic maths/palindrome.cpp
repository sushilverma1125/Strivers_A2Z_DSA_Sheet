#include <iostream>
using namespace std;

bool palindrome(int n) {
    int dup = n;
    int revno = 0;
    
    // Handle negative numbers: consider them not as palindromes
    if (n < 0) return false;

    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        revno = (revno * 10) + digit;
    }
    
    return dup == revno;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    
    return 0;
}
