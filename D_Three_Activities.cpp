#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define ceil_div(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
#define Rohit_Adhikari cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";
pll check(ll a, ll b, ll c){
   
}
void Solve(){
    ll n; cin >> n;
    vll a(n), b(n), c(n);
    vector<pll> p(n), q(n), r(n);
    FOR(i,0,n){
        cin >> a[i];
        p[i].fi = a[i];
        p[i].se = i;
    }
    FOR(i,0,n){
        cin >> b[i];
        q[i].fi = b[i];
        q[i].se = i;
    }
    FOR(i,0,n){
        cin >> c[i];
        r[i].fi = c[i];
        r[i].se = i;
    }
    sort(rall(p));
    sort(rall(q));
    sort(rall(r));
    ll ans = 0;
    FOR(i,0,3){
        FOR(j,0,3){
            FOR(k,0,3){
                if(p[i].se != q[j].se and p[i].se != r[k].se and q[j].se != r[k].se){
                    ans = max((p[i].fi + q[j].fi + r[k].fi), ans);
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    fast;
    auto start_time = clock();
    ll t;
    cin >> t;
    while(t--) Solve();
    auto end_time = clock();
    //Rohit_Adhikari
    
    return 0;
}