#include <iostream>
using namespace std;

/************************************************************Selection Sort************************************************************/
/*
Approach:
1. Iterate over each element of the array.
2. For each element, find the minimum element in the remaining unsorted part of the array.
3. Swap the found minimum element with the first element of the unsorted part.
4. Repeat until the entire array is sorted.
*/
void selectionSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int min = i;
        for(int j = i + 1; j <= n - 1; j++) { // Start from i + 1
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted array using Selection Sort: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
