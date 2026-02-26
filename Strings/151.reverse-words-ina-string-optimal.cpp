class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while(j<n){
            while(j<n && s[j]==' ') j++;
            while(j<n && s[j]!=' ') s[i++] = s[j++];
            while(j<n && s[j]==' ') j++;
            if(j<n) s[i++] = ' ';
        }
        s.resize(i);
        reverse(s.begin(),s.end());
        i=0;
        j=0;
        while(j<s.size()){
            if(s[j]==' '){
                reverse(s.begin()+i,s.begin()+j);
                i = j+1;
            }
            j++;
        }
        reverse(s.begin()+i,s.begin()+j);
        return s;
    }
};

// tc = O(N)
// sc = O(1)