/*
14. Longest Common Prefix

Input: strs = ["flower","flow","flight"]
Output: "fl"

Input: strs = ["dog","racecar","car"]
Output: ""

Approach:
Step 1:  Sort the list of strings
Step 2:  Compare the first and last strings in the sorted list
Step 3:  Find the common prefix between the first and last strings

*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());

        int i = 0;
        string first = strs.front();
        string last = strs.back();
        
        while(i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};