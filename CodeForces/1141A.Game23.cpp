#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m - n == 0){
        cout<<0;
        return 0;
    }
    if (m % n != 0) {
        cout << -1;
        return 0;
    }
    int num = m/n;
    int count = 0;
    while(num>1){
        if(num%2==0){
            num = num/2;
            count++;
        }else if(num%3==0){
            num = num/3;
            count++;
        }else{
            cout<<-1;
            return 0;
        }
    }
    cout<<count;
    return 0;
}