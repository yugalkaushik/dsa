#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(b.rbegin(), b.rend());
        bool ok = true;
        for (int i = 0; i + 2 < n; i++) {
            if (b[i] % b[i + 1] != b[i + 2]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << b[0] << " " << b[1] << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}