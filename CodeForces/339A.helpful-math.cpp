#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char,int> occurence;
    for(int i=0;i<n;i++){
        if(s[i] != '+'){
            occurence[s[i]]++;
        }
    }
    string result ="";
    for(char i='1';i<='3';i++){
        int oc = occurence[i];
        while(oc--){
            if(result.size()!=0){
                result += '+';
            }
            result += i;
        }
    }
    cout<<result;
    return 0;
}