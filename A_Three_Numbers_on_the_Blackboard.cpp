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
    ll a,b,c; cin >> a >> b >> c;
    ll max_num = max(max(a,b),c), min_num = min(min(a,b),c);
    ll d = max_num - min_num;
    vll v; v.pb(a); v.pb(b); v.pb(c);
    sort(all(v));
    if(v[0] + v[1] < v[2]) v[2] = v[0] + v[1];
    d = min(d,v[2] - v[0]);
    cout << d << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}