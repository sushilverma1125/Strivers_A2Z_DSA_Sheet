#include<bits/stdc++.h>
using namespace std;

long long toh(int n, int from, int to, int aux) {
    if(n == 1) {
        cout << "move disk "<< n << " from rod " << from << " to rod " << to << endl;
        return n;
    }

    int count = toh(n - 1, from, aux, to);
    cout << "move disk "<< n << " from rod " << from << " to rod " << to << endl;
    count++;

    count += 1;

    count += toh(n - 1, aux, to, from);
    return count; 
}

int main() {
    int n;
    cin >> n;
    
}