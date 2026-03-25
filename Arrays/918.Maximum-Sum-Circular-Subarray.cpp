class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max1 = INT_MIN;
        int result = INT_MIN;
        int sum = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            max1 = max(max1,sum);
            if(sum<0) sum = 0;
        }

        int max2 = INT_MAX;
        int total = 0;
        sum = 0;

        for(int i=0;i<nums.size();i++){
            total += nums[i];
            sum += nums[i];
            max2 = min(max2,sum);
            if(sum>0) sum = 0;
        }

        if(max1<0) return max1;
        result = max(total-max2,max1);
        return result;
    }
};

// tc: O(n)
// sc: O(1)