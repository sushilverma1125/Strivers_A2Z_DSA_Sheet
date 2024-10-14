/*
151. Reverse Words in a String

Input: s = "the sky is blue"
Output: "blue is sky the"

Input: s = "  hello world  "
Output: "world hello"

Input: s = "a good   example"
Output: "example good a"

Approach 1 (Using tokenizer):
Step 1: Use stringstream to generate tokens for each words
Step 2: Declare 2 string variables  to store the reversed words and the result string
Step 3: Iterate through the tokens and store it in result
Step 4: Return the result

NOTE: To remove the last space from the result string, we can use the substr() function to remove the last character if it. substr(0, result.length() - 1).

*/
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token = "";
        string result = "";
        while (ss >> token) {
            result = token + " " + result;
        } 
        return result.substr(0, result.length() - 1);
    }
};