#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        long long ones = 0, inversions = 0;
        for (char c : s) {
            if (c == '1') {
                ones++;
            } else {
                inversions += ones; // প্রতিটি 0 এর আগে যতগুলো 1 আছে, সব inversion
            }
        }

        string fwin; // এখানে উত্তর রাখা হবে
        if (inversions % 2 == 1) {
            fwin = "Alice";
        } else {
            fwin = "Bob";
        }

        cout << fwin << "\n";
    }
    return 0;
}
