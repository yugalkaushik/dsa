class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            char c = s[i];
            if(c!='*'){
                st.push(c);
            } else {
                st.pop();
            }
        }
        string result = "";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

// tc = O(n)
// sc = O(n)