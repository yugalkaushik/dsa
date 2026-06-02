#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int hs;
        cin>>hs;
        int st = hs*2;
        vector<int> inputs(st);
        for(int i=0;i<st;i++){
            cin>>inputs[i];
        }
        sort(inputs.begin(),inputs.end());
        int mid = st/2;
        int absoluteD = abs(inputs[mid] - inputs[mid-1]);
        cout<<absoluteD<<endl;
    }
    return 0;
}