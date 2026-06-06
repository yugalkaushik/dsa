class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int left = 0;
        int maxLen = 0;
        deque<int> minQ;
        deque<int> maxQ;
        for(int right = 0;right<n;right++){
            while(!minQ.empty() && nums[right]<minQ.back()){
                minQ.pop_back();
            }
            while(!maxQ.empty() && nums[right] > maxQ.back()){
                maxQ.pop_back();
            }
            maxQ.push_back(nums[right]);
            minQ.push_back(nums[right]);
            while(maxQ.front() - minQ.front() > limit){
                if(maxQ.front() == nums[left]){
                    maxQ.pop_front();
                }
                if(minQ.front() == nums[left]){
                    minQ.pop_front();
                }
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
// tc = O(n)
// sc = O(n)