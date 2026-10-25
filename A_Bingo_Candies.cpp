#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll n; cin >> n; vector<vll> v(n); ll z = n*n; vll m(z+1,0);
    FOR(i,0,n){
        for(int j = 0;j<n; j++){
            ll x; cin >> x;
            v[i].push_back(x);
            m[x]++;
        }
    }
    ll s = sz(m);
    sort(rall(m));
    ll M = m[0];
    if(M <= n*n - n) cout <<"YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}