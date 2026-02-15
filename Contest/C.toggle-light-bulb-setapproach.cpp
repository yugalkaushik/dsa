class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> S;
        for(int i=0;i<bulbs.size();i++){
            if(S.find(bulbs[i]) != S.end()){
                S.erase(bulbs[i]);
            } else {
                S.insert(bulbs[i]);
            }
        }
        bulbs.clear();
        for(auto it = S.begin();it != S.end();it++){
            bulbs.push_back(*it);
        }
        return bulbs;
    }
}

//tc = O(NlogN) due to set insertion and deletion
//sc = O(N) in worst case when all bulbs are toggled odd number of times