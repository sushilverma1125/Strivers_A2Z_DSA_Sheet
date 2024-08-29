#include <iostream>
using namespace std;

int fact(int n) {
    if (n < 0)
        return 0; // Factorial is not defined for negative numbers.
    if (n == 0)
        return 1; // Base case: 0! is 1.
    return n * fact(n - 1);
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << fact(number) << endl;
    }

    return 0;
}
