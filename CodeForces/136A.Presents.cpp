#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> present(n);
    vector<int> result(n);
    for(int i=0;i<n;i++){
        cin>>present[i];
    }
    for(int i=0;i<n;i++){
        int index = present[i];
        result[index-1] = i+1;
    }
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}
// Time complexity: O(n)
// Space complexity: O(n)