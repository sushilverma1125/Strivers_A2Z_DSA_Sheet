#include <iostream>
#include <vector>
using namespace std;

/************************************************************Merge Sort************************************************************/
/*
Approach:
1. Divide the array into two halves until each subarray contains a single element.
2. Merge the subarrays back together in a sorted manner:
   a. Create a temporary array to hold merged elements.
   b. Compare elements from the left and right subarrays and insert the smaller element into the temporary array.
   c. Copy any remaining elements from the left or right subarray into the temporary array.
   d. Copy the merged elements back to the original array.
3. Repeat until the entire array is sorted.
*/
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array using Merge Sort: ";
    for(auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}
