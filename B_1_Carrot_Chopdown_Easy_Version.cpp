#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
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
    ll n,m; cin >> n >> m; vll v(n); map<ll,ll> mp;
    FOR(i,0,n){
        cin >> v[i];
        mp[v[i]]++;
    }
    
    vll suffix_sum(m+2,0);
    RFOR(i,1,m+1){
        suffix_sum[i] = suffix_sum[i+1] + mp[i];
        cout << suffix_sum[i] <<" ";
    }
    ll max_val = 0;
    FOR(i,1,m+1){
        ll total_val = suffix_sum[i];
        if(2*i <= m and mp.count(2*i)){
            total_val += mp[2*i];
        }

        max_val = max(max_val,total_val);
    }
    cout << endl;
    cout << max_val << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}