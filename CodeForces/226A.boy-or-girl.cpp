#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    unordered_set<char> seen;
    int count = 0;
    for(int i=0;i<n;i++){
        char c = s[i];
        if(seen.find(c)!=seen.end()){
            continue;
        } else{
            count++;
            seen.insert(c);
        }
    }
    if(count%2!=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
// tc = O(n)
// sc = O(1)