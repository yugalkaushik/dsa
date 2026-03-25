class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cmax = nums[0];
        int cmin = nums[0];
        int result = nums[0];
        for(int i=1;i<nums.size();i++){
            int num = nums[i];
            int tempmax = max({num,num*cmax,num*cmin});
            cmin = min({num,num*cmin,num*cmax});
            cmax = tempmax;
            result = max(result,cmax);
        }
        return result;
    }
};

// tc: O(n)
// sc: O(1)