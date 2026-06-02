#include<bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int count = 0;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                if(c=='D' && i == n-1){
                count++;
                } else if(c=='R' && j == m-1){
                count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}