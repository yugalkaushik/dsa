#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    string instance = "";
    map<char,int> mp;
    for(char c:s){
        mp[c]++;
    }
    for(auto it:mp){
        if((it.second % k) != 0 ){
            cout<<-1;
            return 0;
        } 
        char c = it.first;
        int num = it.second / k;
        string res(num,c);
        instance.append(res);
    }
    string result = "";
    for(int i=0;i<k;i++){
        result.append(instance);
    }
    cout<<result;
    return 0;
}