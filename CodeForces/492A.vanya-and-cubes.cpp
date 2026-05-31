#include<bits/stdc++.h>
using namespace std;
int main(){
    int cubes;
    cin>>cubes;
    int prev = 0;
    int i = 1;
    int count = 0;
    while(cubes>=prev+i){
        cubes = cubes - (prev + i);
        prev = prev + i;
        i++;
        count++;
    }
    cout<<count;
    return 0;
}