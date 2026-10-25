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
    ll n; cin >> n; vector<pll> p(n);
    FOR(i,0,n){
        cin >> p[i].first;
        p[i].se = i;
    }
    vector<pll> m = p;
    sort(rall(p));
    vector<pll> v(n);
    ll x = 0; bool flag = true;
    ll a = 0, b = 0;
    FOR(i,0,n){
        v[i].fi = p[i].se;
        if(flag){
            a++;
            v[i].se = x + a;
            flag = false;
        }else{
            b++;
            v[i].se = x - b;
            flag = true;
        }
    }
    ll cost = 0;
    sort(all(v));
    FOR(i,0,n) m[i].se = v[i].se;
    FOR(i,0,n){
        cost += 2 * llabs(x - m[i].se)* m[i].fi;
    }
    cout << cost << endl;
    cout << x <<" ";
    FOR(i,0,n) cout << v[i].se <<" ";
    cout << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}