#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> goal(7);
    for(int i=0;i<7;i++){
        cin>>goal[i];
    }
    int day = 1;
    while(n>0){
        n = n - goal[day-1];
        if(n<=0){
            cout<<day;
            return 0;
        }
        day++;
        if(day == 8) day = 1;
    }
    cout<<day;
    return 0;
}