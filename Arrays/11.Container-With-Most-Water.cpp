class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int highest = 0;
        while(left<right){
            int minlen = min(height[left],height[right]);
            int current = minlen * (right - left);
            highest = max(current,highest);
            if(height[left]<height[right]){
                left++;
            } else {
                right--;
            }
        }
    return highest;
    }
};

// tc:O(n)
// sc:O(1)
// Approach:
// 1. Initialize two pointers, `left` at the beginning of the array and `right` at the end of the array.
// 2. While `left` is less than `right`, calculate the area formed by the lines at the `left` and `right` pointers, which is the minimum of the two heights multiplied by the distance between them.
// 3. Update the maximum area found so far.
