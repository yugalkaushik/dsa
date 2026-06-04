#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int num;
        cin>>num;
        vector<pair<int, int>> operations;
        int current = num;
        for(int i=num-1;i>=1;i--){
            operations.push_back({current,i});
            current = (current+i+1)/2;
        }
        cout<<current<<endl;
        for(int i=0;i<operations.size();i++){
            cout<<operations[i].first<<" "<<operations[i].second<<endl;
        }
    }
    return 0;
}