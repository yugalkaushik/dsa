class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int n = s2.size();
        unordered_map<char,int> s1count;
        unordered_map<char,int> s2count;
        for(char c:s1){
            s1count[c]++;
        }
        bool result = false;
        int left = 0;
        for(int i = 0;i<s1.size();i++){
            s2count[s2[i]]++;
        }
        for(int right = s1.size();right<n;right++){
            if(s1count == s2count) return true;
            s2count[s2[left]]--;
            if(s2count[s2[left]] == 0){
                s2count.erase(s2[left]);
            }
            s2count[s2[right]]++;
            left++;
        }
        if(s1count == s2count) return true;
        return result;
    }
};

// tc: O(n)
// sc: O(1) since we are only storing 26 characters in the hashmap at any time.
// Approach:
// 1. We can use a sliding window approach to check if the current window of s2 is an anagram of s1.
// 2. We can use two hashmaps to store the count of characters in s1 and the current window of s2.
// 3. We can compare the two hashmaps to check if they are equal, if they are equal, then we have found an anagram of s1 in s2 and we can return true.
// 4. We can move the sliding window by incrementing the right pointer and decrementing the left pointer and updating the hashmaps accordingly.