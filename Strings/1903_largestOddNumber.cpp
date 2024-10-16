/*
1903. Largest Odd Number in String

Input: num = "52"
Output: "5"

Input: num = "4206"
Output: ""

Input: num = "35427"
Output: "35427"

Approacah: Iterate over the string from right to left. If we encounter an odd digit, then return the whole string before that digit.
*/

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        for(int i = n - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};