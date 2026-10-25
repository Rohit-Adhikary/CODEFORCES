#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> gy;

void pre() {
    for (int d1 = 0; d1 <= 9; ++d1) {
        for (int d2 = d1; d2 <= 9; ++d2) {
            vector<long long> q;
            if (d1 > 0) q.push_back(d1);
            if (d2 > 0 && d1 != d2) q.push_back(d2);
            int h = 0;
            while(h < q.size()) {
                long long cur = q[h++];
                gy.push_back(cur);
                long long n1 = cur * 10 + d1;
                long long n2 = cur * 10 + d2;
                if (n1 <= 1000000000LL) q.push_back(n1);
                if (d1 != d2 && n2 <= 1000000000LL) q.push_back(n2);
            }
        }
    }
    gy.push_back(1000000000LL);
    sort(gy.begin(), gy.end());
    gy.erase(unique(gy.begin(), gy.end()), gy.end());
    auto it = gy.begin();
    while (it != gy.end() && *it < 2) it = gy.erase(it);
}

bool check(long long v) {
    int m = 0;
    while(v > 0) {
        m |= (1 << (v % 10));
        v /= 10;
    }
    return __builtin_popcount(m) <= 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int t;
    if (cin >> t) {
        while (t--) {
            long long x;
            cin >> x;
            for (long long y : gy) {
                if (check(x * y)) {
                    cout << y << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}