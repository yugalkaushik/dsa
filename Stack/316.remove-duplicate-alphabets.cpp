class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        unordered_map<char,int> occurence;
        unordered_set<char> seen;
        stack<char> st;
        for(int i=0;i<n;i++){
            occurence[s[i]] = i;
        }
        st.push(s[0]);
        seen.insert(s[0]);
        for(int i=1;i<n;i++){
            char c = s[i];
            if(seen.count(c)){
                continue;
            }
            while(!st.empty() && c<st.top() && occurence[st.top()]>i){
                seen.erase(st.top());
                st.pop();
            }
            st.push(c);
            seen.insert(c);
        }
        string result = "";
        int stsize = st.size();
        for(int i=0;i<stsize;i++){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

// tc = O(n)
// sc = O(n)