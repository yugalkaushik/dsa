class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(string s:words){
            freq[s]++;
        }
        auto comp = [](pair<string,int> a, pair<string,int> b){
            if(a.second == b.second){
                return a.first > b.first;
            }
            return a.second < b.second;
        };
        priority_queue<pair<string,int>,vector<pair<string,int>>,decltype(comp)>pq(comp);
        for(auto a:freq){
            pq.push(a);
        }
        vector<string> result;
        for(int i=0;i<k;i++){
            auto top = pq.top();
            string s = top.first;
            result.push_back(s);
            pq.pop();
        }
        return result;
    }
};
// tc = O(n + m log m) here m is unique words
// sc = O(m)