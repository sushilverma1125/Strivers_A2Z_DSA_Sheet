/*
921. Minimum Add to Make Parentheses Valid
Example 1:
Input: s = "())"
Output: 1

Example 2:
Input: s = "((("
Output: 3

Approach:
    Step 1: Initialize Counters
    We create two counters: size to track unmatched opening parentheses 
    and open to count needed opening parentheses for unmatched closing ones.

    Step 2: Iterate Over the String
    For each character ch in the string:
        - If ch is an opening parenthesis '(':
        - Increment size by 1 (we have one more unmatched opening parenthesis).
        - If ch is a closing parenthesis ')':
        - If size is greater than 0:
        - Decrement size by 1 (this closing parenthesis matches an opening one).
        - If size is 0:
        - Increment open by 1 (we need an additional opening parenthesis).

    Step 3: Calculate the Total Needed
    After processing the entire string, return the sum of open and size,
    which represents the total number of parentheses needed to make the string valid.
*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = 0;
        int open = 0;
        for(char ch : s) {
            if(ch == '(') {
                size++;
            } else if(size > 0) {
                size--;
            } else {
                open++;
            }
        }
        return open + size;
    }
};