class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool active = true;
        int first = 0;
        int second = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                active = !active;
            }
            if(i%6==5){
                active = !active;
            }
            if(active){
                first = first + nums[i];
            } else {
                second = second + nums[i];
            }
        }
        return first-second;
    }
};

// tc = O(N)
// sc = O(1)