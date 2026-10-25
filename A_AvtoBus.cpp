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

void Solve(){
    ll n; cin >> n;
    if(n % 2 != 0 or n < 4){
        cout << -1 << endl;
        return;
    }
    ll p = n / 2 , max_val = 0, min_val = LLONG_MAX;
    FOR(i,0,3){
        ll x = (3*i);
        ll y = p - x;
        if(y % 2 == 0) max_val = max(max_val, (y/2)+i);
    }

    FOR(i,0,3){
        ll x = 2*i;
        ll y = p - x;
        if(y % 3 == 0) min_val = min(min_val, (y/3)+i);
    }
    if(max_val == LLONG_MAX or min_val == 0) cout << -1 << endl;
    else cout << min_val <<" " << max_val << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}