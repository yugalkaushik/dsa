#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxLen = 1;
    int count = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        } else{
            maxLen = max(maxLen,count);
            count = 1;
        }
    }
    maxLen = max(maxLen, count);
    cout<<maxLen;
    return 0;
}