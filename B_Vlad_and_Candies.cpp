#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        if (mx <= sum - mx + 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
