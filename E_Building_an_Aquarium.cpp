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
#define mod 1e9 + 7
ll getHeight(vll& pre, vll& a, ll &x){
    ll aquaium_height = LLONG_MAX, h = LLONG_MAX;
    FOR(i,0,sz(pre)){
        h = (x+pre[i])/(i+1);
        aquaium_height = min(aquaium_height, h);
    }
    return aquaium_height;
}
ll getVal(ll &need_space, ll &n){
    ll h = (need_space/n);
    return h;
}
void Solve(){
    ll n, x; cin >> n >> x; vll a(n);
    FOR(i,0,n) cin >> a[i];
    sort(all(a)); vll pre(n); pre[0] = a[0];
    FOR(i,1,n) pre[i] = pre[i-1] + a[i];
    ll max_coral = a.back(), min_coral = a.front();
    ll empty_space = (n * max_coral) - pre.back();
    if(empty_space == x) cout << max_coral << endl;
    else if(empty_space > x) cout << getHeight(pre, a, x) << endl;
    else{
        ll need_space = x - empty_space;
        ll h = max_coral + getVal(need_space, n);
        cout << h << endl;
    }
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}