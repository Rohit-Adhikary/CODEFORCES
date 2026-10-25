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
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (ll)(x).size()
ll WAY(ll n, ll k){
    ll sum = 0;
    FOR(i,k,n+1){
        sum += (n - i + 1);
    }
    return sum;
}
ll CNT(vll m,ll k){
    ll c = 0;
    FOR(i,0,sz(m)){
        ll n = m[i];
        if(n >= k) c = c + WAY(n,k);
    }
    return c;
}
void Solve(){
    ll n, k, q;
    cin >> n >> k >> q; ll c = 0;
    vll v(n);
    vll m;
    FOR(i,0,n){
        cin >> v[i];
        if(v[i] <= q) c++;
        else{
            if(c!= 0) m.pb(c);
            c = 0;
        }
    }
    if(v.back() <= q) m.pb(c);
    if(m.empty()){
        cout << 0 << endl;
        return;
    }
    cout << CNT(m,k) << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}