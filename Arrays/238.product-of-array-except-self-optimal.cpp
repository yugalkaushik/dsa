class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        prefix[0] = nums[0];
        postfix[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            postfix[i] = postfix[i+1]*nums[i];
        }
        for(int i=0;i<n;i++){
            int left;
            int right;
            if(i==0){
                left = 1;
            } else left = prefix[i-1];
            if(i==n-1){
                right = 1;
            } else right = postfix[i+1];
            nums[i] = left*right;
        }
        return nums;
    }
};

//tc = O(N)
//sc = O(N)