/*
1021. Remove Outermost Parentheses

Input: s = "(()())(())"
Output: "()()()"

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"

Approach:
Step 1:  Remove the outermost parentheses from the string.
Step 2:  If the string is not empty, repeat the process until the string is empty
Step 3:  Return the final string after removing all outermost parentheses.

NOTE: First check for ')' and then  '(' to avoid incorrect removal of parentheses.


*/
class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter = 0;
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ')') counter--;
            if(counter != 0) ans.push_back(s[i]);
            if(s[i] == '(') counter++;
        }
        return ans;
    }
};