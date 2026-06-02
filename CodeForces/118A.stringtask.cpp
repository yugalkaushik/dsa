#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    string result = "";
    for(int i=0;i<n;i++){
        char c = tolower(s[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
            result.push_back('.');
            result.push_back(c);
        }
    }
    cout<<result;
    return 0;
}