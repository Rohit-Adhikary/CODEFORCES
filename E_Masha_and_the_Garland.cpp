#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--; // 0-index

            string seg = s.substr(l, r-l+1);
            int len = seg.size();

            // build two patterns
            string p1, p2;
            for (int i = 0; i < len; i++) {
                p1 += (i % 2 == 0 ? '0' : '1');
                p2 += (i % 2 == 0 ? '1' : '0');
            }

            int mismatch1 = 0, mismatch2 = 0;
            for (int i = 0; i < len; i++) {
                if (seg[i] != p1[i]) mismatch1++;
                if (seg[i] != p2[i]) mismatch2++;
            }

            int need = min(mismatch1, mismatch2);
            cout << (need <= k ? "YES\n" : "NO\n");
        }
    }
}
