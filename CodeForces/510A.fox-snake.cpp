#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool start = false;
    for(int i=0;i<n;i++){
        string s = "";
        if(i%2!=0 && start == false){
            for(int j=0;j<m-1;j++){
                s.append(".");
            }
            s.append("#");
            start = !start;
            cout<<s<<endl;
        }
        else if(i%2!=0 && start){
            s.append("#");
            for(int j=0;j<m-1;j++){
                s.append(".");
            }
            start = !start;
            cout<<s<<endl;
        }
        else {
            for(int j=0;j<m;j++){
                s.append("#");
            }
            cout<<s<<endl;
        }
    }
    return 0;
}