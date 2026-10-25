#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for(char c : s) {
            if(c == '0') count0++;
            else count1++;
        }
        if(count0 == count1) cout << count0 - 1 << "\n";
        else cout << min(count0, count1) << "\n";
    }
    return 0;
}
