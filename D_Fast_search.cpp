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
ll lowerIndex(vll& v, ll l){
    auto it = lower_bound(all(v), l);
    ll index = it - v.begin();
    if(it == v.end()) return sz(v);
    else return index;
}

ll upperIndex(vll &v, ll r){
    auto it = upper_bound(all(v),r);
    ll index = it - v.begin();
    if(it == v.end()) return sz(v);
    else return index;
}

void Solve(){
    ll n, k; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    cin >> k;
    sort(all(v));
    while(k--){
        ll l, r; cin >> l >> r;
        ll l_index = lowerIndex(v,l);
        ll r_index = upperIndex(v,r);
        if(l_index == n and r_index == n){
            cout << 0 <<" ";
        }else if(l_index <= r_index){
            cout << r_index - l_index << " ";
        }else cout << 0 <<" ";
    }
}
int main() {
    fast;
    
    auto start_time = clock();
    Solve();
    auto end_time = clock();
    //cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";
    
    return 0;
}