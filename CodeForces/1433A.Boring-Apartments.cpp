#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> cases(n);
    for(int i=0;i<n;i++){
        cin>>cases[i];
    }
    for(int i=0;i<n;i++){
        int keypress = 0;
        int num = cases[i];
        int digit = num%10;
        int beforeSum = (digit-1)*10;
        int count = 0;
        while(num){
            count++;
            num = num/10;
        }
        keypress = beforeSum + (count * (count + 1)) / 2;
        cout<<keypress<<endl;
    }
    return 0;
}