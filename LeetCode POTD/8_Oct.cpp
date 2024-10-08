/*
1963. Minimum Number of Swaps to Make the String Balanced
Input: s = "][]["
Output: 1
Explanation: You can make the string balanced by swapping index 0 with index 3.
The resulting string is "[[]]".

Approach :
    Step 1: Check if it's either "[". If yes, then push it into the stack.
    Step 2: If it's "]", then check if the stack is empty. If yes, then increment the count.
    Step 3: Else, Pop the stack and increment the count.
    Step 4:  If the stack is empty at the end, then return the count. Else, return -1.
*/

class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;

        for(char &ch : s) {
            if(ch == '[') {
                st.push(ch);
            } else if(! st.empty()) {
                st.pop(); // balancing the string
            }
        }
        return (st.size()+1)/2;    
    }
};

// By using a variable size instead of stack

class Solution {
public:
    int minSwaps(string s) {
        int size = 0;

        for(char &ch : s) {
            if(ch == '[') {
                size++;
            } else if(size > 0) {
                size--;
            }
        }
        return (size+1)/2;    
        }
};