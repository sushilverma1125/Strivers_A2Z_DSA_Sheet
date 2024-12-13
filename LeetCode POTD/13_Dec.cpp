// priority_queue<int> pq; (maxheap)
// priority_queue<int, vector<int>> pq; (maxheap)
// priority_queue<int, vector<int>, greater<int>> pq; (minheap)

/*
Approach 1:
class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> vec(n);

        for(int i = 0; i < n; i++) {
            vec[i] = {nums[i], i};
        }

        sort(vec.begin(), vec.end()); // O(nlogn)

        long long score = 0;
        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++) { //O(n)
            int element = vec[i].first;
            int idx     = vec[i].second;

            if(visited[idx] == false) {
                visited[idx] = true;
                score += element;

                if(idx - 1 >= 0 && visited[idx-1]==false) {
                    visited[idx-1] = true;
                }
                if(idx +1 <= n && visited[idx+1] == false) {
                    visited[idx+1] = true;
                }
            }
        }
        return score;
    }
};
*/

/*
Approach 2
*/
class Solution {
public:
    #define P pair<int, int>
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n, false);
        priority_queue<P, vector<P>, greater<P>> pq; // min-heap

        for(int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        long long score = 0;

        while(!pq.empty()) {
            P temp = pq.top();
            int element = temp.first;
            int idx     = temp.second;
            pq.pop();

            if(!visited[idx]) {
                visited[idx] = true;
                score += element;

                if(idx - 1 >= 0 && !visited[idx - 1]) {
                    visited[idx - 1] = true;
                }
                if(idx + 1 < n && !visited[idx + 1]) {
                    visited[idx + 1] = true;
                }
            }
        }
        return score;  
    }
};
