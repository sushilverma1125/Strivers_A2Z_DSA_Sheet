/*
Example:
Input:  arr = [1, 2, 4, 7],  m = 6 
Output: 3
Explanation: If the given array 'arr' is: [1, 2, 4, 7] and m = 6. We insert m = 6 in the array and get 'arr' as: [1, 2, 4, 6, 7]. The position of 6 is 3 (according to 0-based indexing)

Approach:
Step 1: Initialize low to 0, high to n - 1, and ans to n (where n is the size of the array).
Step 2: Perform Binary Search:
    While low ≤ high:
        Compute mid as (low + high) / 2.
        If arr[mid] ≥ m, update ans to mid and search in the left half (high = mid - 1).
        Otherwise, search in the right half (low = mid + 1).
Step 3: Return ans, which is the index where m should be inserted to maintain sorted order.

*/

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here
	int n = arr.size();
	int low = 0, high = n - 1;
	int ans = n;
	while(low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if(arr[mid] >= m) {
			ans = mid;
			// look for more small index on left
			high = mid - 1;
		} else {
			low = mid + 1; // look for right 
		}
	}
	return ans;
}
