#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> people(n);
    for(int i=0;i<n;i++){
        cin>>people[i];
    }
    for(int i=0;i<n;i++){
        if(people[i]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}