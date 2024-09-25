/*
1207. Unique Number of Occurrences
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true


/*
Approach 1 :

    Step 1:  Use unordered_map to store the frequency of each number.
    Step 2:  Use unordered_set to store the frequency counts.
    Step 3:  Iterate through the map and insert the frequency counts into the set.
    Step 4:  If the size of the set is not equal to the size of the map, return false. Otherwise, return true.

*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        // storing the frequencies of all numbers
        for(int &x : arr) {
            mp[x]++;
        }

        unordered_set<int> st;

        for(auto &it : mp) {
            int freq = it.second; // it.first will containt the number
            if(st.find(freq) != st.end()) return false;
            st.insert(freq);
        }
        return true;
    }
};

/* 
Approach 2 :

    Step 1: Use a vector of size 2001 to store the frequency of each number, where the index corresponds to the number shifted by +1000 to handle negative values.
    Step 2: Iterate through the input array arr and update the frequency counts in the vector at the index x + 1000.
    Step 3: Sort the frequency vector to arrange the counts in non-decreasing order.
    Step 4: Iterate through the sorted frequency vector and check for duplicate counts by comparing each count to the previous count.
    Step 5: If a duplicate frequency is found, return false. Otherwise, return true if all frequencies are unique.  
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vec(2001, 0);

        for(int &x : arr) {
            vec[x + 1000]++;
        }

        sort(vec.begin(), vec.end());

        for(int i = 0; i < 2001; i++) {
            if(vec[i] != 0 && vec[i] == vec[i - 1]) return false;
        }
        return true;
    }
};

