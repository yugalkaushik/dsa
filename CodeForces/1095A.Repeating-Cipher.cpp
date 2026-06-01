#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result = "";
    for(int i=0; ;i++){
        int k = i*(i+1)/2;
        if(k >= n) break;
        result.push_back(s[k]);
    }
    cout<<result;
    return 0;
}   