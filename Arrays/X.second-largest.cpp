class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int MaxNum = INT_MIN;
        int SecondMax = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > MaxNum){
                SecondMax = MaxNum;
                MaxNum = nums[i];
            }
            else if(nums[i] > SecondMax && nums[i] < MaxNum){
                SecondMax = nums[i];
            }
        }
        return SecondMax;
    }
};

//tc = O(N)
//sc = O(1)