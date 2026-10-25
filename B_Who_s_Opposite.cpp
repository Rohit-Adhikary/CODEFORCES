#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long diff = abs(a - b);
        long long n = diff * 2;
        if(max({a, b, c}) > n) {
            cout << -1 << endl;
        } else {
            long long d = c + n/2;
            if(d > n) d -= n;
            cout << d << endl;
        }
    }
    return 0;
}
