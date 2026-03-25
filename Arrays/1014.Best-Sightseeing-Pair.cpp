class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxv = 0;
        int result = INT_MIN;
        for(int i=1;i<values.size();i++){
            int curr = values[maxv] + values[i] + maxv - i;
            result = max(result,curr);
            if(values[maxv] + maxv < values[i] + i) maxv = i;
        }
        return result;
    }
};

// tc: O(n)
// sc: O(1)