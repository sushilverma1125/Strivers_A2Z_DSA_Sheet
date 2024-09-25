// 34. Find First and Last Position of Element in Sorted Array
/*
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

Approach:
    Step 1: Find out the first and last occurence using binary search
    Step 2: Check if (first == -1) then return {-1, -1}, it will save the extra searching time for last occurence
    Step 2: If the target is not found, return [-1, -1]

*/

#include <bits/stdc++.h>

class Solution {
public:
    int firstOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int first = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return first;
    }

    int lastOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int last = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstOccurence(nums, n, target);
        if (first == -1) return {-1, -1};
        int last = lastOccurence(nums, n, target);
        return {first, last};
    }
};
