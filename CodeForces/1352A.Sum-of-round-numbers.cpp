#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> val(n);
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=0;i<n;i++){
        int curr = val[i];
        vector<int> current;
        int place = 1;
        while(curr>0){
            int digit = curr%10;
            if(digit > 0){
                current.push_back(digit*place);
            }
            curr /= 10;
            place = place*10;
        }
        cout<<current.size()<<endl;
        for(int x:current){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}