class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        for(string str:words){
            int i = 0;
            int j = 0;
            while(j<s.size()&&i<str.size()){
                if(s[j]==str[i]){
                    i++;
                }
                j++;
                if(i==str.size()) count++;
            }
        }
        return count;
    }
};

// tc: O(n*m) where n is the length of string s and m is the total length of all words in the vector
// sc: O(1) excluding the space used for input
