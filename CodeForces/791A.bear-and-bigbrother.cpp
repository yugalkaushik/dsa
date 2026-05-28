#include <bits/stdc++.h>
using namespace std;
int main(){
    int limak,bob;
    cin>>limak>>bob;
    int count = 0;
    while(limak<=bob){
        count++;
        limak = 3*limak;
        bob = 2*bob;
    }
    cout<<count;
    return 0;
}