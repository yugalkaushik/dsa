#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int amount = 0;
    for(int i=1;i<=w;i++){
        amount += i*k;
    }
    amount -= n;
    if(amount < 0) amount = 0;
    cout<<amount;
    return 0;
}