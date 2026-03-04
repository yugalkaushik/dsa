class Solution {
public:
    int numSplits(string s) {
        unordered_set<int> st;
        int split = 1;
        int count = 0;
        while(split<s.size()){
            int first = 0;
            int second = 0;
            for(int i=0;i<s.size();i++){
            char c = s[i];
            if(i<split){
                st.insert(c);
            }
            else if (i==split){
                first = st.size();
                st.clear();
                st.insert(c);
            }
            else st.insert(c);
            }
        second = st.size();
        if(first == second) count++;
        st.clear();
        split++;
        }
        return count;
    }
};

// tc: O(n^2) where n is the length of the input string s
// sc: O(n) for the unordered set storing unique characters
