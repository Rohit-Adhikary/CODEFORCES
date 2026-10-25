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
#define sz(x) (int)(x).size()
pll valIndex(vll v,ll n, ll x,ll y){
    pll p; bool b = true;
    FOR(i,0,n){
        if(v[i] == x and b){
            p.fi = i;
            b = false;
        }
        if(v[i] == y) p.se = i;
    }
    return p;
}
void Solve(){
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    ll x = vmax(v);
    ll y = vmin(v);
    pll p = valIndex(v,n,x,y);
    if(p.fi < p.se) cout << p.fi + (n-1-p.se) << endl;
    else cout << p.fi +(n-1-p.se)-1 << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}