class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int n = strs.size();
        int minLength = INT_MAX;
        for(int i = 0;i<n;i++){
            minLength = min(minLength,(int)strs[i].size());
        }
        int i = 0;
        while(i<minLength){
            char a = strs[0][i];
            for(int j=0;j<n;j++){
                if(strs[j][i] != a){
                    return result;
                }
            }
            result.push_back(a);
            i++;
        }
        return result;
    }
};

// tc = O(N*M) where N is the number of strings and M is the length of the longest common prefix
// sc = O(M) where M is the length of the longest common prefix