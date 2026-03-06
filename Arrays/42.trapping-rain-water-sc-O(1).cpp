class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int capacity = 0;
        int left = 0;
        int right = n-1;
        int maxleft = height[0];
        int maxright = height[n-1];
        while(left<right){
            if(height[left]<=height[right]){
                left++;
                maxleft = max(maxleft,height[left]);
                capacity += max(0, maxleft - height[left]);
            } else {
                right--;
                maxright = max(maxright,height[right]);
                capacity += max(0, maxright - height[right]);
            }
        }
        return capacity;
    }
};

// tc = O(n)
// sc = O(1)
