class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>> mp;
        int count = 0;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        for(int i=0;i<words.size();i++){
            string str = words[i];
            int latest = -1;
            bool check = true;
            for(int j=0;j<str.size();j++){
                if(mp.find(str[j]) == mp.end()){
                    check = false;
                    break;
                }
                auto it = lower_bound(mp[str[j]].begin(), mp[str[j]].end(),latest+1);
                if(it == mp[str[j]].end()){
                    check = false;
                    break;
                }
                latest = *it;
            }
            if(check) count++;
        }
        return count;
    }
};

// tc: O(n + m log n) where n is the length of string s and m is the total length of all words in the vector
// sc: O(n) for the map storing the indices of characters in string s
// Approach:
// 1. Create a map `mp` that maps each character in the string `s` to a vector of its indices in `s`.
// 2. Iterate through each word in the `words` vector. For each word, initialize a variable `latest` to -1 and a boolean variable `check` to true.
// 3. For each character in the current word, check if it exists in the map. If it does not exist, set `check` to false and break out of the loop.
// 4. If the character exists in the map, use `lower_bound` to find the index of the next occurrence of the character in `s` that is greater than `latest`. If there is no such index, set `check` to false and break out of the loop.
// 5. If `check` is still true after processing all characters in the word, increment the count of matching subsequences.
