#include <iostream>
using namespace std;

/************************************************************Insertion Sort************************************************************/
/*
Approach:
1. Iterate over each element of the array starting from the second element.
2. For each element, compare it with the elements before it and shift the larger elements one position to the right.
3. Insert the current element into its correct position in the sorted portion of the array.
4. Repeat until the entire array is sorted.
*/
void insertionSort(int arr[], int n) {
    for(int i = 1; i <= n - 1; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    insertionSort(arr, n);

    cout << "Sorted array using Insertion Sort: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
