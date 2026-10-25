#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll> v(m);
    for(ll i = 0; i<m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll min_segment = LLONG_MAX;
    for(ll i = 1; i<m; i++){
        ll d = n - (max(v[i-1], v[i]) - min(v[i-1],v[i]) - 1);
        if(v[i-1] < n and v[i] <= n) d = max(v[i],v[i-1]) - min(v[i], v[i-1])+1;
        min_segment = min(min_segment, d);
    }
    cout << min_segment << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}