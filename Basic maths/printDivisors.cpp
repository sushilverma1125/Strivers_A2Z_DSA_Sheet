int* printDivisors(int n, int &size){
// Write your code here

    vector<int> ans;
    int sqrtN = sqrt(n);
    for(int i = 0; i < sqrtN; ++i) {
        if(n % i == 0) {
            ans.push_back(i);
            if(i != n / i) {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}
