#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int revno = 0;
	while(n != 0) {
		int digit = n % 10;
		n /= 10;
		revno = (revno * 10) + digit;
	}
	cout << revno;
	
}
