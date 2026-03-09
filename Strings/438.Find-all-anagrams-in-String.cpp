class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.size() < p.size()) return result;
        unordered_map<char,int> pcount;
        unordered_map<char,int> scount;
        for(char c:p){
            pcount[c]++;
        }
        int left = 0;
        int n = p.size();
        int right = 0;
        for(;right<n;right++){
            char c = s[right];
            scount[c]++;
        }
        while(right<=s.size()){
            if(scount == pcount){
                result.push_back(left);
            }
            if(right == s.size()) break;

            scount[s[right]]++;
            scount[s[left]]--;
            if(scount[s[left]] == 0) scount.erase(s[left]);
            left++;
            right++;
        }
        return result;
    }
};

// tc: O(n)
// sc: O(1) since we are only storing 26 characters in the hashmap at any time.
