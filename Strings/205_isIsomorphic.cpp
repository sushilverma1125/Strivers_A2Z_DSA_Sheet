/*
205. Isomorphic Strings

Input: s = "egg", t = "add"
Output: true

Input: s = "foo", t = "bar"
Output: false

Approach:
Step 1: Use two unordered_map to map characters from s to t and vice versa. This helps check for duplicates and inconsistencies.
Step 2: Iterate through both strings:
    For each character pair ch1 (from s) and ch2 (from t):
        If ch1 is already mapped, ensure it maps to ch2; if not, return false.
        If ch2 is already mapped, ensure it maps to ch1; if not, return false.
        If not mapped, create the mappings for both.
Step 3: If the loop completes without conflicts, return true to indicate the strings are isomorphic.
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int n = s.length(); // length of both s and t are same

        for(int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            if(mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 ||
               mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1) 
            {
                return false;
            }

            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        return true;
    }
};