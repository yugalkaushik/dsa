class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        for(int i= 0;i<=n;i++){
            ans = ans ^ i;
            ans = ans ^ nums[i]

        }
        return ans;
    }
};

//here the logic is that we will take xor of all the numbers from 0 to n and also take xor of all the numbers in the array.
// The missing number will be the result of xor of these two results because all the numbers that are present in the array will cancel out with the numbers from 0 to n and we will be left with the missing number.

//tc = O(N)
//sc = O(1)