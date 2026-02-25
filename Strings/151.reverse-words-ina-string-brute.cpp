class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string addS = "";
        for(char c:s){
            if(isalnum(c)) addS += c;
            else {
                if(!addS.empty()){
                temp.push_back(addS);
                addS = "";
                }
            }
        }
        if(!addS.empty()) temp.push_back(addS);
        reverse(temp.begin(),temp.end());
        string result = "";
        for(int i=0;i<temp.size();i++){
            if(i) result += " ";
            result += temp[i];
        }
        return result;
    }
};

// tc = O(N)
// sc = O(N)