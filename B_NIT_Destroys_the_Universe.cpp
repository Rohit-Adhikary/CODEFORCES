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
    ll n; cin >> n; vll v; vll m;
    ll c = 0;
    v.pb(0);
    FOR(i,0,n){
        ll x; cin >> x;
        v.pb(x);
    }
    v.pb(0);
    FOR(i,0,(int)v.size()){
        if(v[i] == 0) m.pb(i);
    }
    ll s = sz(m);
    FOR(i,1,s){
        if(abs(m[i] - m[i-1]) > 1){
            c++;
            if(c > 3) break;
        }
    }
    if(c == 0) cout << 0 << endl;
    else if ( c == 1) cout << 1 << endl;
    else cout << 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}