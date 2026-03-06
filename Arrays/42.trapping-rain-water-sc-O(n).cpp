class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> minh(n);
        int capacity = 0;
        int maxleft = 0;
        for(int i = 0;i<n;i++){
            maxleft = max(maxleft,height[i]);
            left[i] = maxleft;
        }
        int maxright = 0;
        for(int i = n-1;i>=0;i--){
            maxright = max(maxright,height[i]);
            right[i] = maxright;
        }
        for(int i = 0;i<n;i++){
            minh[i] = min(left[i],right[i]);
        }
        for(int i = 0;i<n;i++){
            int current = minh[i] - height[i];
            if(current>0){
                capacity = capacity + current;
            }
        }
        return capacity;
    }
};

// tc = O(n)
// sc = O(n)
