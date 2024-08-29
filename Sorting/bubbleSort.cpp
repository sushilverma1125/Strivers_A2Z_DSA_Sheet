#include <iostream>
using namespace std;

/************************************************************Bubble Sort************************************************************/
/*
Approach:
1. Iterate from the end of the array towards the start.
2. For each iteration, compare adjacent elements and swap them if they are in the wrong order.
3. If during an iteration no swaps are made, the array is already sorted, and the algorithm terminates early.
4. Repeat until the array is sorted.
*/
void bubbleSort(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        int flag = 0;
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) { // Best case: array is already sorted
            break;
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

    bubbleSort(arr, n);

    cout << "Sorted array using Bubble Sort: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
