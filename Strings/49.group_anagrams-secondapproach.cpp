class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for(string s:strs){
            string key = s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        for(auto &p:mp){
            result.push_back(p.second);
        }
        return result;
    }
};

// tc: O(n * k log k) where n is the number of strings and k is the maximum length of a string (due to sorting each string)
// sc: O(n * k) for the result vector and O(n * k) for the unordered map (in the worst case, all strings are anagrams of each other)
// Approach:
// 1. Create an unordered map to store the mapping of sorted strings to their corresponding group of anagrams.
// 2. Iterate through each string in the input vector. For each string, sort its characters to get a sorted version of the string, which will serve as the key in the unordered map.
// 3. Add the original string to the vector corresponding to the sorted key in the unordered map.
// 4. After processing all strings, iterate through the unordered map and add each group of anagrams (the values in the map) to the result vector.