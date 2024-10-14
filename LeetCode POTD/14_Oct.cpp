/*
2530. Maximal Score After Applying K Operations
Example 1:
Input: nums = [10,10,10,10,10], k = 5
Output: 50
Explanation: Apply the operation to each array element exactly once. The final score is 10 + 10 + 10 + 10 + 10 = 50.

Example 2:
Input: nums = [1,10,3,3,3], k = 3
Output: 17
Explanation: You can do the following operations:
Operation 1: Select i = 1, so nums becomes [1,4,3,3,3]. Your score increases by 10.
Operation 2: Select i = 1, so nums becomes [1,2,3,3,3]. Your score increases by 4.
Operation 3: Select i = 2, so nums becomes [1,1,1,3,3]. Your score increases by 3.
The final score is 10 + 4 + 3 = 17.
*/

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum = 0;

        priority_queue<int> pq(begin(nums), end(nums)); // Heapify T.C: O(n)

        while(k--) {
            int maxEle = pq.top();
            pq.pop();

            sum += maxEle;

            maxEle = ceil(maxEle/3.0);

            pq.push(maxEle);
        }
        return sum;
    }
};