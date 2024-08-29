#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    map<int,int> mp; // unordered_map<int,int> mp syntax for unordered map
    for(int i = 0; i < n; i++) {
        mp[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int numbers;
        cin >> numbers;
        // fetching
        cout << mp[numbers] << endl;
    }
}