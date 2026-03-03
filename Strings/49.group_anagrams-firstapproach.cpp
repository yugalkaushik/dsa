class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,int> umap;
        int i = 0;
        while(i<strs.size()){
            string sorted = strs[i];
            sort(sorted.begin(),sorted.end());
            if(umap.find(sorted) != umap.end()){
                result[umap[sorted]].push_back(strs[i]);
            } else {
                result.push_back({strs[i]});
                umap[sorted] = result.size() - 1;
            }
            i++;
        }
        return result;
    }
};

// tc: O(n * k log k) where n is the number of strings and k is the maximum length of a string (due to sorting each string)
// sc: O(n * k) for the result vector and O(n * k) for the unordered map (in the worst case, all strings are anagrams of each other)
// Approach:
// 1. Create a result vector to store the groups of anagrams and an unordered map to store the mapping of sorted strings to their corresponding index in the result vector.
// 2. Iterate through each string in the input vector. For each string, sort its characters to get a sorted version of the string.
// 3. Check if the sorted string exists in the unordered map. If it does, it means we have already encountered an anagram group for that sorted string, so we can simply add the original string to the corresponding group in the result vector.
// 4. If the sorted string does not exist in the unordered map, it means we have not encountered an anagram group for that sorted string, so we create a new group in the result vector with the original string and add the sorted string to the unordered map with its corresponding index in the result vector.