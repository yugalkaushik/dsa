#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> shapes(n);
    for(int i=0;i<n;i++){
        cin>>shapes[i];
    }
    int sum = 0;
    for(string s:shapes){
        if(s=="Tetrahedron") sum += 4;
        else if (s=="Cube") sum += 6;
        else if (s=="Octahedron") sum += 8;
        else if (s=="Dodecahedron") sum += 12;
        else if (s=="Icosahedron") sum += 20;
        else sum += 0;
    }
    cout<<sum<<endl;
    return 0;
}