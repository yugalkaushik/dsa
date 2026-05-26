#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> soldiers(n);
    for(int i=0;i<n;i++){
        cin>>soldiers[i];
    }
    int count = 0;

    int largest = 0;
    for(int i=1;i<n;i++){
        if(soldiers[i]>soldiers[largest]){
            largest = i;
        }
    }

    int smallest = 0;
    for(int i=1;i<n;i++){
        if(soldiers[i]<=soldiers[smallest]){
            smallest = i;
        }
    }

    count = largest + (n-1-smallest);
    if(largest>smallest){
        count--;
    }
    cout<<count<<endl;
    return 0;
}
// tc = O(n)
// sc = O(n)