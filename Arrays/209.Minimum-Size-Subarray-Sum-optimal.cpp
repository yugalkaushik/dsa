class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        int left = 0;
        int right = 0;
        int sum = 0;
        while(right<nums.size()){
            sum += nums[right];
            while(sum>=target) {
                minlen = min(minlen,right - left+1);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        if(minlen == INT_MAX) return 0;
        else return minlen;
    }
};
// tc: O(n)
// sc: O(1)
// Approach: We can use a sliding window approach to solve this problem. We will maintain a window of elements and keep track of the sum of the elements in the window. If the sum is less than the target, we will expand the window by moving the right pointer. If the sum is greater than or equal to the target, we will shrink the window by moving the left pointer and update the minimum length of the window that satisfies the condition. We will continue this process until we have traversed the entire array.