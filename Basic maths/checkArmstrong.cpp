#include <iostream>
#include <cmath> // For pow and log10
using namespace std;

bool checkArmstrong(int n) {
    int num = n;
    int cnt = (int)(log10(n) + 1); // Number of digits
    int sum = 0;
    
    while (n != 0) {
        int d = n % 10;
        sum += pow(d, cnt);
        n /= 10;
    }
    
    return num == sum;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if (checkArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
