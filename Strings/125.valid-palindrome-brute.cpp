class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                cleaned.push_back(tolower(s[i]));
            }
        }
        string reversed = cleaned;
        reverse(reversed.begin(),reversed.end());
        if(reversed == cleaned) return true;
        else return false;
    }
};

// tc = O(N)
// sc = O(N)