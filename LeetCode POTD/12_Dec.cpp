class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // Heapify - O(n)
        priority_queue<int> pq (gifts.begin(), gifts.end()); // Maxheap

        long long sum = 0;
        for(int &gift:gifts) { // O(n)
            sum += gift;
        }

        while(k--) {
            int maxEle = pq.top(); // O(1)
            pq.pop(); // O(log(n))

            int remaining = sqrt(maxEle);
            sum -= (maxEle - remaining);
            pq.push(remaining); // O(log(n))
        }
        return sum;
    }
};