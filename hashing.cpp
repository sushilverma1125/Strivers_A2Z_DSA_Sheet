#include <bits/stdc++.h>
using namespace std;

int main() {

    //------------------------------------------------------------Integer hashing
    /*
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int numbers;
        cin >> numbers; 
        // fetching
        cout << hash[numbers] << endl;
    }
    */

    //------------------------------------------------------------Character hashing
    /*
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
        hash[s[i] - 'A']++;  // for upper case
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        // fetching
        cout << hash[c  - 'a'] << endl;
        cout << hash[c  - 'A'] << endl; // for upper case
    }

    // for both lower case and uppercase
    string s;
    cin >> s;

    // precompute
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        // fetching
        cout << hash[c] << endl;
    }
    */  
}