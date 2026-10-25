#include <bits/stdc++.h>
using namespace std;
using  ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll k; 
        cin >> k;
        ll m = ceil(sqrt((long double)k));
        ll pivot = m*m - m + 1;
        ll r, c;
        if (k <= pivot) {
            r = k - (m-1)*(m-1);
            c = m;
        } else {
            r = m;
            c = m*m - k + 1;
        }
        cout << r << " " << c << endl;
    }
}
