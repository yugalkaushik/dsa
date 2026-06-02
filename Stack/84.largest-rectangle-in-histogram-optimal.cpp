class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        stack<pair<int,int>> st;
        for(int i=0;i<n;i++){
            int lastIndex = i;
            while(!st.empty() && st.top().second > heights[i]){
                int area = st.top().second * (i - st.top().first);
                maxArea = max(area,maxArea);
                lastIndex = st.top().first;
                st.pop();
            }
            st.push({lastIndex,heights[i]});
        }
        while(!st.empty()){
            int area = st.top().second * (n - st.top().first);
            maxArea = max(area,maxArea);
            st.pop();
        }
        return maxArea;
    }
};

// tc = O(n)
// sc = O(n)