#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))0
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll n; cin >> n;
    vll v(n), pre(n);
    FOR(i,0,n) cin >> v[i];
    pre[0] = v[0];
    FOR(i,1,n) pre[i] = pre[i-1] + v[i];
    ll ans = 0;
    FOR(i,0,n-1){
        ans = max(ans, gcd(pre[i], pre[n-1] - pre[i]));
    }
    cout << ans << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}