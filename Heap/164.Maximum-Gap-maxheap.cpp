class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        priority_queue<int> pq;
        for(int i:nums){
            pq.push(i);
        }
        int prev = pq.top();
        pq.pop();
        int maxD = 0;
        while(!pq.empty()){
            int curr = prev - pq.top();
            prev = pq.top();
            maxD = max(curr,maxD);
            pq.pop();
        }
        return maxD;
    }
};
// tc = O(n log n)
// sc = O(n)