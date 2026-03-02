class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,char> umap;
        unordered_set<char> used;

        int i = 0;
        while(i < s.size()){
            if(umap.find(s[i]) != umap.end()){
                if(umap[s[i]] != t[i]) return false;
            } 
            else {
                if(used.count(t[i])) return false;
                umap[s[i]] = t[i];
                used.insert(t[i]);
            }
            i++;
        }

        for(int j = 0; j < s.size(); j++){
            s[j] = umap[s[j]];
        }

        return s == t;
    }
};

// tc: O(n)
// sc: O(n)
// Approach:
// 1. Check if the lengths of the two strings are different. If they are, return false.
// 2. Use an unordered map to store the mapping of characters from string s to string t, and an unordered set to keep track of characters in string t that have already been mapped.
// 3. Iterate through the characters of both strings simultaneously. For each character in string s
//    - If the character is already in the map, check if it maps to the corresponding character in string t. If not, return false.
//    - If the character is not in the map, check if the corresponding character in string t has already been mapped to another character. If it has, return false. Otherwise, add the mapping to the map and mark the character in string t as used.
// 4. After processing all characters, iterate through string s again and replace each character with its mapped character from string t using the map.
// 5. Finally, compare the transformed string s with string t. If they are equal