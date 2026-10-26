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

ll MEX(const vll& v, ll m ,ll n){
    vector<bool> ok(n+2, false);
    FOR(i,0,m){
        if(v[i] <= n) ok[v[i]] = true;
    }
    ll mex = 0; while(ok[mex]) mex++;
    return mex;
}
void Solve(){
    ll n, k; cin >> n >> k;
    vll v(n); FOR(i,0,n) cin >> v[i];
    ll m = n - k + 1;

    ll first_mex = MEX(v, m , n);
    ll last_mex = first_mex;

    ll mex_i = -1, mex_j = -1;
    FOR(i,0,n){
        FOR(j,i+1,n){
            swap(v[i],v[j]);

            ll new_mex = MEX(v,m,n);
            if(new_mex > last_mex){
                last_mex = new_mex;
                mex_i = i+1; mex_j = j+1;
            }

            swap(v[i], v[j]);
        }
    }

    if(last_mex == first_mex) cout << -1 <<"\n";
    else cout << mex_i <<" " << mex_j << endl;
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