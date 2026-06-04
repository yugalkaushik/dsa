class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int> result(n);
        queue<int> q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        for(int i=0;i<n;i++){
            int index = q.front();
            q.pop();
            result[index] = deck[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return result;
    }
};
// tc = O(n log n)
// sc = O(n)