class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>> sorted(freq.begin(),freq.end());
        
        sort(sorted.begin(),sorted.end(),[](pair<char,int> a,pair<char,int>b){
            return a.second > b.second;
        });
        string result = "";
        for(auto a:sorted){
            int fr = a.second;
            for(int i=0;i<fr;i++){
                result += a.first;
            }
        }
        return result;
    }
};
// tc = O(n)
// sc = O(n)