class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> result(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int popped = st.top();
                result[popped] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};
// tc = O(n)
// sc = O(n)