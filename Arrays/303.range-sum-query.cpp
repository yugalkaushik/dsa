class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this-> nums= nums;
        for(int i =1;i<this->nums.size();i++){
            this->nums[i] = this->nums[i] + this->nums[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return nums[right];
            return nums[right] - nums[left-1];
    }
};

// tc: O(n) for constructor and O(1) for sumRange
// sc: O(n)