#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int c = 0;
	for(int i = 0; i < n; i++) {
		if(n % i == 0) {
			c++;
		}
	} 
	if(c == 2) return true;
	else return false;
	
}