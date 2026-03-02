class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> tmap;
        for(char c:text){
            tmap[c]++;
        }
        return min({
            tmap['b'],
            tmap['a'],
            tmap['l']/2,
            tmap['o']/2,
            tmap['n']
        });
    }
};

// tc: O(n)
// sc: O(1)
// Approach:
// 1. Count the frequency of each character in the input string using an unordered map.
// 2. The number of "balloon" words that can be formed is limited by the least frequent character needed to form the word.
// 3. Since 'l' and 'o' are needed twice in the word "balloon", we divide their counts by 2.
// 4. Return the minimum count among the required characters to get the maximum number of "balloon" words that can be formed.
