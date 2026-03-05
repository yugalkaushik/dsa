class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            if((numbers[left]+numbers[right]) > target){
                right--;
            } else if((numbers[left]+numbers[right]) < target){
                left++;
            } else {
                result.push_back(left+1);
                result.push_back(right+1);
                return result;
            }
        }
        return result;
    }
};

// tc:O(n)
// sc:O(1)
// Approach:
// 1. Initialize two pointers, `left` at the beginning of the array and `right` at the end of the array.
// 2. While `left` is less than `right`, calculate the sum of the elements at the `left` and `right` pointers.
// 3. If the sum is greater than the target, move the `right` pointer one step to the left to decrease the sum.
// 4. If the sum is less than the target, move the `left` pointer one step to the right to increase the sum.
// 5. If the sum is equal to the target, return the indices of the two numbers (adjusted for 1-based indexing) as the result.
