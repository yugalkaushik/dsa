class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0;
        unordered_map<char,int>count;
        int left = 0;
        for(int right=0;right<s.size();right++){
            count[s[right]]++;
            int maxval = 0;
            for(auto &p:count){
                maxval = max(maxval,p.second);
            }
            int curr = (right - left + 1) - maxval;
            if(curr > k){
                count[s[left]]--;
                left++;
            }
            result = max(result,right-left+1);
        }
        return result;
    }
};

// tc: O(n)
// sc: O(k)
// Approach: We can use a sliding window approach to solve this problem. We will maintain a count of characters in the current window and keep track of the maximum frequency of any character in the window. If the number of characters that need to be replaced (current window size - max frequency) exceeds k, we will shrink the window from the left until it is valid again. We will keep track of the maximum window size that we have seen so far.    