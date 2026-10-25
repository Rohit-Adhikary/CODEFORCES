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
#define vmax(x) *(max_element(all(x)))
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

void Coprime(unordered_set<ll>& s, vector<pll>& p){
    vll m; for(auto i : s) m.pb(i);
    ll n = sz(m);
    FOR(i,0,n){
        FOR(j,0,n) if(gcd(m[i],m[j]) == 1) p.eb(m[i],m[j]);
    }
}
void Solve(){
    ll n; cin >> n;
    unordered_map<ll,ll> m;
    unordered_set<ll> s;
    FOR(i,0,n){
        ll IN; cin >> IN;
        m[IN] = i;
        s.insert(IN);
    }
    vector<pll> p;
    Coprime(s,p);
    ll ps = sz(p), ans = -1;
    FOR(i,0,ps) ans = max(ans, m[p[i].fi] + m[p[i].se] + 2);
    
    cout << ans << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}