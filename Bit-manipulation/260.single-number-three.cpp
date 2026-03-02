class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorAll = nums[0];
        for(int i = 1;i<nums.size();i++){
            xorAll = xorAll ^ nums[i];
        }
        unsigned int ub = xorAll;
        unsigned int setBit = ub & -ub;
        int num1 = 0, num2 = 0;
        for(auto num:nums){
            if(num & setBit){
                num1 ^= num;
            } else num2 ^= num;
        }
        return {num1,num2};
    }   
};

// tc: O(n)
// sc: O(1)

// Approach: 
// 1. XOR all numbers to get the XOR of the two unique numbers.
// 2. Find a set bit in the XOR result (this bit is different between the two unique numbers).
// 3. Partition the array into two groups based on this set bit.
// 4. XOR each group separately to get the two unique numbers.