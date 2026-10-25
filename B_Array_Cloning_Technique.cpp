#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll roundLL(double x){
    ll a = (ll)x;
    double b = (ll)a;
    if(x == b) return a;
    else return a+1;
}
void Solve(){
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    sort(all(v)); vll m; ll c = 1;
    FOR(i,1,n){
        if(v[i-1] == v[i])c++;
        else{
            m.pb(c);
            c = 1;
        }
    }
    m.pb(c);
    sort(rall(m));
    ll M = m[0];
    ll ans = roundLL(log2((double)n/M));
    cout << ans + (n - M) << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}