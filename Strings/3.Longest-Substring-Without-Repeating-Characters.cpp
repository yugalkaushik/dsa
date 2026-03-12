class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> freq;
        int result  = 0;
        int left = 0;
        for(int right = 0;right<s.size();right++){
            while(freq.find(s[right]) != freq.end()){
                freq.erase(s[left]);
                left++;
            }
            freq.insert(s[right]);
            result = max(result,right-left+1);
        }
        return result;
    }
};

// tc: O(n)
// sc: O(k) since we are storing at most k elements in the hashset at any time.