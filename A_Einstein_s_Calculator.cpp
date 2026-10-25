#include <bits/stdc++.h>
void Solve();
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
#define ceil_div(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
const long long mod =  1e9 + 7;

void Solve(){
    ll n; cin >> n; vll a(n);
    FOR(i,0,n) cin >> a[i];
    vll v; ll x = 1, ans = 0;
    FOR(i,0,n){
        if(a[i] != 0){
            (x = x * a[i]) % mod;
        }else{
            v.pb(x);
            x = 1;
        }
        
    }
    ll last = a.back();
    if(last != 0) v.pb(x);
    FOR(i,0,sz(v)) ans += v[i];
    cout << ans <<"\n";
}
int main() {
    fast;
    auto start_time = clock();
    Solve();
    auto end_time = clock();
    //cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";
    
    return 0;
}