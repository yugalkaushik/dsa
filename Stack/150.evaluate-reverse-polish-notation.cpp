class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();

        for(int i = 0; i < n; i++) {
            string c = tokens[i];
            if(c != "*" && c != "/" && c != "+" && c != "-") {
                st.push(stoi(c));
            } else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                int res = 0;
                if(c == "+") res = b + a;
                else if(c == "-") res = b - a;
                else if(c == "*") res = b * a;
                else res = b / a;
                st.push(res);
            }
        }
        return st.top();
    }
};
// tc = O(n)
// sc = O(n)