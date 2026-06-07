#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;

    while(cases--){
        long long num;
        cin >> num;
        long long a = -1;
        long long b = -1;
        for(long long i = num % 12; i <= num; i += 12){
            long long num1 = i;
            long long num2 = num - i;

            long long n = num1;
            long long rev = 0;
            while(n > 0){
                rev = rev * 10 + (n % 10);
                n /= 10;
            }
            if(num1 != rev){
                continue;
            }
            a = num1;
            b = num2;
            break;
        }
        if(a == -1 && b == -1){
            cout << -1 << endl;
        } else{
            cout << a << " " << b << endl;
        }
    }

    return 0;
}