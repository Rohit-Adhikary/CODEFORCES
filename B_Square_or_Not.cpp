#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = sqrt(n);
        if (k * k != n) {
            cout << "No" << endl;
            continue;
        }
        bool ok =true;
        for (int i = 0; i<k; i++) {
            for (int j = 0; j<k; j++) {
                char c = s[i*k + j];
                if (i ==0 || i== k - 1 || j== 0 || j == k - 1) {
                    if (c != '1') ok=false;
                } else {
                    if (c != '0') ok=false;
                }
            }
        }
        cout <<(ok ? "Yes\n" : "No\n");
    }
}
