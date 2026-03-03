class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freqM;
        for(char c:magazine){
            if(freqM.find(c)!= freqM.end()){
                freqM[c]++;
            } else freqM[c] = 1;
        }
        for(char c : ransomNote) {
            if(freqM[c] == 0) {
                return false;
            }
            freqM[c]--;
        }
        return true;
    }
};

// tc: O(n)
// sc: O(n)
// Approach:
// 1. Create an unordered map to store the frequency of each character in the magazine string
// 2. Iterate through the magazine string and populate the frequency map.
// 3. Iterate through the ransomNote string and for each character, check if it exists in the frequency map and if its count is greater than 0. If not, return false.
// 4. If the character exists and has a count greater than 0, decrement the count in the frequency map.
// 5. If we successfully iterate through the ransomNote string without returning false, return true