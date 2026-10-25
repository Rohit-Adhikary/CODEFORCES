#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
pll Count(ll x){
    ll c = 0;
    while(x % 2 == 0 && x >= 1){
        x = x / 2;
        c = 1;
    }
    return {c, x};
}
void Solve(){
    ll n; cin >> n; ll sum = 0;
    vll v(n),even,odd; FOR(i,0,n){
        cin >> v[i];
        v[i] % 2 == 0 ? even.pb(v[i]) : odd.pb(v[i]);
    }
    v.clear();
    FOR(i,0,even.size()) v.pb(even[i]);
    FOR(i,0,odd.size()) v.pb(odd[i]);
    ll totalCount = 0;
    FOR(i,0,n){
        sum += v[i];
        pll p = Count(sum);
        totalCount += p.fi;
        sum = p.se;
    }
    cout << totalCount << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}
