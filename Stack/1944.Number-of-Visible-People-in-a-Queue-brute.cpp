class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> result(n,0);
        for(int i=0;i<n;i++){
            int maxHeight = 0;
            for(int j=i+1;j<n;j++){
                if(heights[j]>maxHeight){
                    result[i]++;
                    maxHeight = heights[j];
                }
                if(heights[j]>=heights[i]){
                    break;
                }   
            }
        }
        return result;
    }
};
//tc = O(n)
//sc = O(1)