#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> stations(n, vector<int>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>stations[i][j];
        }
    }
    int total = 0;
    int capacity = 0;
    for(int i=0;i<n;i++){
        total -= stations[i][0];
        total += stations[i][1];
        capacity = max(capacity,total);
    }
    cout<<capacity;
    return 0;
}
// tc = O(n)
// sc = O(n)