#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>> values(t,vector<int>(3));
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>values[i][j];
        }
    }
    for(int i=0;i<t;i++){
        int count = 0;
        int a = values[i][0];
        int b = values[i][1];
        int n = values[i][2];
        while(a<=n && b<=n){
            if(a<b){
                a += b;
            } else{
                b += a;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}