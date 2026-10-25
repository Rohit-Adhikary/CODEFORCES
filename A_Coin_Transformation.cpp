#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n <= 3){
            cout << 1 << endl;
            continue;
        }
        int k = 0;
        while(n > 3){
            n /= 4;
            k++;
        }
        cout << (1LL << k) << endl;
    }
    return 0;
}
