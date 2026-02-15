class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        bitset<101> state;
        for(int b:bulbs){
            state.flip(b);
        }
        bulbs.clear();
        for(int i=0;i<=100;i++){
            if(state[i]){
                bulbs.push_back(i);
            }
        }
        return bulbs;
    }
};
// tc = O(N)
// sc = O(1)