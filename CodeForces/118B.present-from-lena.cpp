#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= 2 * n; i++) {
        int level;
        if(i <= n) {
            level = i;
        } else {
            level = 2 * n - i;
        }
        for(int j = 0; j < 2 * (n - level); j++) {
            cout << " ";
        }
        for(int j = 0; j <= level; j++) {
            cout << j;
            if(j != level) {
                cout << " ";
            }
        }
        for(int j = level - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}