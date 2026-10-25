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
ll Area(ll a, ll b){
    return a*b;
}
void Solve(){
    ll w,h; cin >> w >> h;
    ll k1; cin >> k1; vll y0(k1); FOR(i,0,k1) cin >> y0[i];
    ll k2; cin >> k2; vll yh(k2); FOR(i,0,k2) cin >> yh[i];
    ll k3; cin >> k3; vll x0(k3); FOR(i,0,k3) cin >> x0[i];
    ll k4; cin >> k4; vll xw(k4); FOR(i,0,k4) cin >> xw[i];
    ll A = 0;

    ll A1 = Area(y0.back() - y0.front(), h);
    ll A2 = Area(yh.back() - yh.front(), h);
    A = max(A1, A2);
    ll A3 = Area(x0.back() - x0.front(),w);
    A = max(A,A3);
    ll A4 = Area(xw.back() - xw.front(),w);
    cout << max(A,A4) << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}