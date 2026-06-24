class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        auto comp = [](pair<char,int>a,pair<char,int>b){
            return a.second<b.second;
        };
        priority_queue<pair<char,int>,vector<pair<char,int>>,decltype(comp)> pq(comp);
        for (auto p : freq) {
            pq.push(p);
        }
        string result = "";
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            result.append(top.second, top.first);
        }
        return result;
    }
};
// tc = O(n + k log k)
// sc = O(n + k)