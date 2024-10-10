/*
33. Search in Rotated Sorted Array
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

Example 3:
Input: nums = [1], target = 0
Output: -1

Approach: 
1. Find the pivot element in the rotated sorted array using binary search.
2. If the target element is greater than the pivot element, search in the right half of the array. Otherwise, search in the left half of the array.
3. If the target element is found, return its index. Otherwise, return -1.

*/

class Solution {
public:
    int findPivot(vector<int>& nums, int n) {
        int l = 0, r = n - 1;

        while(l < r) {
            int mid = l + (r - l) / 2;

            if(nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return r;
    }

    int binarySearch(int l, int r, vector<int>&nums, int target) {
        int idx = -1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] == target) {
                idx = mid;
                break;
            } else if(nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return idx;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int pivot_index = findPivot(nums, n);

        int idx = binarySearch(0, pivot_index - 1, nums, target);

        if(idx != -1) return idx;

        idx = binarySearch(pivot_index, n - 1, nums, target);

        return idx;
    }
};