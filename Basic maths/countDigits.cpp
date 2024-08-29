#include <iostream>
using namespace std;

int countDigits(int n) {
    int c = 0;
    while (n != 0) {
        c = c + 1;
        n /= 10;
    }
    return c;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "The number of digits is: " << digitCount << endl;
    
    return 0;
}
