class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] !=0 ) continue;
            for(int j=i;j<n;j++){
                if(nums[j] != 0) break;
                count++;
            }
        }
        return count;
    }
};

//tc = O(N^2)
//sc = O(1)