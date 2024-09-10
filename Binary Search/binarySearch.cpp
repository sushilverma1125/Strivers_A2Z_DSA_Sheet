// Iterative approach  T.C : O(n)  S.C: O(1)
int search(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;

    while(low <= high) {
      int mid = (low + high) / 2;
      if(nums[mid] == target) return mid;
      else if (target > nums[mid]) low = mid + 1;
      else high = mid - 1;
    }
    return -1;
}

// Recursive approach T.C :  O(log n)  S.C: O(log n)
int recBinarySearch(vector<int> &nums, int low, int high, int target) {
    if(low > high)  return -1;
    int mid = (low + high) / 2;
    // int mid = low + (high-low)/2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return recBinarySearch(nums, mid + 1, high, target);
    return recBinarySearch(nums, low, high - 1, target);
}

int search(vector<int> &nums, int target) {
    return recBinarySearch(nums, 0, nums.size() - 1, target);
}