class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n==1) return heights[0];
        int maxArea = INT_MIN;
        for(int i=0;i<n;i++){
            int minH = heights[i];
            maxArea = max(maxArea, minH);
            for(int j=i+1;j<n;j++){
                minH = min(minH,heights[j]);
                int area = minH * (j - i + 1);
                maxArea = max(maxArea,area);
            }
        }
        return maxArea;
    }
};
// tc = O(n^2)
// sc = O(1)