#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string> cards(5);
    for(int i=0;i<5;i++){
        cin>>cards[i];
    }
    bool isSuit = false;
    bool isRank = false;
    for(int i=0;i<5;i++){
        if(cards[i][0]==s[0]){
            isSuit= true;
        }
        if(cards[i][1]==s[1]){
            isRank = true;
        }
    }
    if(isSuit || isRank){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}

// tc = O(1)
// sc = O(1)