#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count = 0;
    while(n){
        int digit = n%10;
        if(digit == 4){
            count++;
        } else if(digit == 7){
            count++;
        }
        n = n/10;
    }
    if(count == 4){
        cout<<"YES";
        return 0;
    } else if (count == 7){
        cout<<"YES";
        return 0;
    } else{
        cout<<"NO";
        return 0;
    }
}