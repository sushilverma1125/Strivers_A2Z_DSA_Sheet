class Solution {
public:
	int min(vector<int> arr) {
		int min = arr[0];
		for(int i = 1; i < arr.size(); i++) {
			if(min > arr[i]) {
				min = arr[i];
			}
		}
		return min;
	}

	int max(vector<int> arr) {
		int max = arr[0];
		for(int i = 1; i < arr.size(); i++) {
			if(max < arr[i]) {
				max = arr[i];
			}
		}
		return max;
	}
	pair<int, int> getMinMax(vector<int> arr) {
		// code here
		int mi = min(arr);
		int ma = max(arr);
		return {mi, ma};

	}
};