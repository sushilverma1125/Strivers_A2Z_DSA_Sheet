/*
Number of occurrence
Example:
Input: 'n' = 7, 'x' = 3
'arr' = [1, 1, 1, 2, 2, 3, 3]

Brute Force Approach : T.C = O(n)
    Step 1 : Use for loop to iterate over the array.
    Step 2 : Use if condition to check if the element is equal to the target element.
    Step 3 : If the element is equal to the target element, increment the count.
    Step 4 : Return the count.
*/

// Approach 1:
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == x) count++;
	}
	return count;

}

// Approach 2:

#include<bits/stdc++.h>

int firstOccurence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) {
            first  = mid;
            high = mid - 1;
        } else if(arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return first;
}

int lastOccurence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = firstOccurence(arr,  n,  k);
    if(first == -1) return {-1, -1};
    int last = lastOccurence(arr,  n,  k);
    return {first, last};
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int, int> ans = firstAndLastPosition(arr, n, x);
	if(ans.first == -1) return 0;
	return ans.second - ans.first + 1;

}
