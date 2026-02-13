class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            bool sorted = true;
            for(int j=0;j<n-1;j++){
                int index = (i+j)%n;
                int next = (i+j+1)%n;
                if(nums[index] > nums[next]){
                    sorted = false;
                    break;
                }
            }
            if(sorted) return true;
        }
        return false;
    }
};

//tc = O(N^2)
//sc = O(1)