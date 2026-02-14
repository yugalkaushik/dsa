class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp = nums;
        int n = nums.size();
        nums.clear();
        for(int i=0;i<n;i++){
            int index = (i - k%n + n)%n;
            nums.push_back(temp[index]);
        }
    }
};

//tc = O(N)
//sc = O(N)