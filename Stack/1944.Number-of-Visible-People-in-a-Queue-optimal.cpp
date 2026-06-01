class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        if(n == 0) return {};
        stack<int> st;
        vector<int> result(n,0);
        st.push(heights[n-1]);
        for(int i=n-2;i>=0;i--){
            int count = 0;
            while(!st.empty() && heights[i]>st.top()){
                count++;
                st.pop();
            }
            if(!st.empty()) count++;
            st.push(heights[i]);
            result[i] = count;
        }
        return result;
    }
};

// tc = O(n)
// sc = O(n)