#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 != 0) cout << "NO\n";
        else if(sum % 4 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
