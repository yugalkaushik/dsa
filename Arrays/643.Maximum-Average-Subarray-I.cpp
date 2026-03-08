class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1) return nums[0];
        int left = 0;
        double window = 0;
        for(int i = 0;i<k;i++){
            window += nums[i];
        }
        double result = window;
        int right = k;
        while(right<nums.size()){
            window = window - nums[left] + nums[right];
            result = max(result,window);
            right++;
            left++;
        }
        return result/k;
    }
};

// tc: O(n)
// sc: O(1)
// Approach: Sliding Window
// 1. We initialize two pointers, left and right, to represent the current window of size k.
// 2. We calculate the sum of the first k elements to initialize the window variable. 
// 3. We then iterate through the array starting from the k-th element, updating the window sum by subtracting the element at the left pointer and adding the element at the right pointer.
// 4. We keep track of the maximum window sum encountered during the iteration.
// 5. Finally, we return the maximum average by dividing the maximum window sum by k.