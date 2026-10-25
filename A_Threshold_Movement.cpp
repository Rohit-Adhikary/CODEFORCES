#include <bits/stdc++.h>
using namespace std;
void Solve(){
    int n;
    cin >> n;
    vector<long long> v(n+1); 

    long long minOdd = 2e18;
    long long maxEven = -1;
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        if(i % 2 == 1){
            minOdd = min(minOdd,v[i]);
        }else{
            maxEven = max(maxEven,v[i]);
        }
    }
    if( n % 2 != 0){
        cout <<"NO\n";
        return;
    }

    if(minOdd - maxEven >= 2) cout <<
"YES\n";
    else cout <<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}