class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int> result(n,0);
        int position = 0;
        bool skip = false;
        int i = 0;
        while(i<n){
            if(result[position] == 0){
                if(!skip){
                    result[position] = deck[i];
                    i++;
                }
                skip = !skip;
            }
            position = (position + 1) % n;
        }
        return result;
    }
};
// tc = O(n log n);
// sc = O(n)