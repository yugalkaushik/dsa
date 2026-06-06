#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin>>cases;
    vector<vector<int>> result(cases,vector<int>(2));
    int i=0;
    while(i<cases){
        long long a,b,c;
        cin>>a>>b>>c;
        long long resA = -1;
        long long resB = -1;
        if(a<c){
            resA = 1;
        }
        if(c < a*b){
            resB = b;
        }
        result[i][0] = resA;
        result[i][1] = resB;
        i++;
    }
    for(int i=0;i<cases;i++){
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    }
    return 0;
}