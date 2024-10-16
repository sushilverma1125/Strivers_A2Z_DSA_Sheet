/*
205. Isomorphic Strings

Input: s = "egg", t = "add"
Output: true

Input: s = "foo", t = "bar"
Output: false

Approach:
Step 1: We will use two unordered_map to map the characters of s and t and also to check whether it's duplicated. If it's duplicated then there we will return false.
Step 2: 
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