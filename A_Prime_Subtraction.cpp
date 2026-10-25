#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(ll i =0; i<n; i++)
#define all(x) x.begin(),x.end()
#define MAX LLONG_MAX

void Solve(){
    ll x,y; cin >> x >> y;
    ll d = abs(x-y);
    if(d == 1) cout <<"NO\n";
    else cout  <<"YES\n";
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}