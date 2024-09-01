class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        /*
        // Approach 1: T.C (m x n)
            traverse in the original array
            push elements into a 2d vector result
            keep a variable index and increment it by 1
        */

        vector<vector<int>> result(m, vector<int>(n));
        if(original.size() != m*n) {
            return {};
        }

        int idx = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                result[i][j] = original[idx];
                idx++;
            }
        }

        return result;

        /*
        // Approach 2: T.C (m x n)
            find the value of row and col using maths
            keep pushing elelments from original array in that row and col
        */
       
        vector<vector<int>> result(m, vector<int>(n));
        if(original.size() != m*n) {
            return {};
        }

        for(int i = 0; i < original.size(); i++) {
            int row = i/n;
            int col = i%n;
            result[row][col] = original[i];
        }
        return result;
    }
};