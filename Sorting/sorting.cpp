#include<bits/stdc++.h>
using namespace std;
/************************************************************Selection Sort************************************************************/
void selectionSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int min = i;
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

/************************************************************Bubble Sort************************************************************/
void bubbleSort(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        int flag = 0;
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) { // for the best case, means when the array is already sorted
            break;
        }
    }
}

/************************************************************Insertion Sort************************************************************/
void insertionSort(int arr[], int n) {
    for(int i = 0; i <= n - 1; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

/************************************************************Merge Sort************************************************************/
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

/************************************************************Quick Sort************************************************************/
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
    cin >> n;
    int arr[n];
    vector<int> array = {1, 3, 2, 5, 4};
    for(int i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr, n);    
    bubbleSort(arr, n);    
    insertionSort(arr, n); 
    mergeSort(array, 0, n - 1);   

    for(auto i : arr) cout << i << " ";
}