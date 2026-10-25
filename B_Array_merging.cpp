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
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
map<ll,ll> get(vll& v){
    map<ll,ll> m;
    ll cnt = 1;
    FOR(i,1,sz(v)){
        if(v[i-1] == v[i])cnt++;
        else{
            m[v[i-1]] = max(m[v[i-1]], cnt);
            cnt = 1;

        }
    }
    m[v.back()] = max(m[v.back()], cnt);
    return m;
}
void Solve(){
    ll n; cin >> n; vll a(n), b(n), c;
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> b[i];
    
    map<ll,ll> m,o; ll cnt = 1;
    m = get(a);
    o = get(b);
    ll ans = 0;
    FOR(i,0,n){
        ans = max(ans,(m[a[i]] + o[a[i]]));
        ans = max(ans,(m[b[i]] + o[b[i]]));
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}