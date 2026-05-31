#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> cases(n);
    for(int i=0;i<n;i++){
        cin>>cases[i];
    }
    for(int i=0;i<n;i++){
        bool foundOne = false;
        string& num = cases[i];
        int count = 0;
        int answer = 0;
        for(int j=0;j<num.size();j++){
            if(num[j]=='1'){
                foundOne = true;
                answer += count;
                count = 0;
            }
            else if(foundOne){
                count++;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}