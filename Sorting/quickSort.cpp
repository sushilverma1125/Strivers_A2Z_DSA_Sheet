#include <iostream>
#include <vector>
using namespace std;

/************************************************************Quick Sort************************************************************/
/*
Approach:
1. Choose a pivot element from the array (here, the first element is chosen).
2. Partition the array such that all elements less than or equal to the pivot are on its left, and all elements greater are on its right.
3. Recursively apply the same procedure to the left and right subarrays.
4. Repeat until the entire array is sorted.
*/
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(i <= high && arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array using Quick Sort: ";
    for(auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}
