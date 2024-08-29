//----------------------------------------------------------- BETTER APPROACH T.C: O(nlogn) + O(n)
#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	map<int, int> mpp;

	for(int freq: v) {
		mpp[freq]++;
	}

	for(auto it : mpp) {
		if(it.second > (v.size() / 2)) {
			return it.first;
		}
	}

	return -1;
}

// ----------------------------------------------------------- OPTIMAL APPROACH T.C: O(n)
#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
        int cnt = 0;
        int ele;

        // Boyer's Moore Algorithm
        for(int i = 0; i < v.size(); i++) {
            if(cnt == 0) {
                cnt = 1;
                ele = v[i];
            } else if(v[i] == ele) {
                cnt++;
            } else {
                cnt--;
            }
        }

        int cnt1 = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == ele) {
                cnt1++;
            }
        }

        if(cnt1 > (v.size() / 2)) {
            return ele;
        } 
        
        return -1;
}