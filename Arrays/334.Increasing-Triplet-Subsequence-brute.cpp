class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        bool result = false;
        int smallest = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<=smallest){
                smallest = nums[i];
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(nums[j] > nums[i]){
                    return result=true;
                }
            }
        }
        return result;
    }
};

// tc = O(N^2)
// sc = O(1)