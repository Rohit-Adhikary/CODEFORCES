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

void Solve(){
    ll n; cin >> n; vll v(n), p(n);
    FOR(i,0,n) cin >> v[i];
    FOR(i,0,n) p[i] = i+1;
    ll cnt = 0; vll in;
    FOR(i,0,n){
        if(v[i] != p[i]){
            in.pb(i);
            cnt++;
        }
    }
    vll x;
    FOR(i,0,sz(in)){
        x.pb(v[in[i]]);
    }
    reverse(all(x));
    vll y; ll k = 0;
    FOR(i,0,n){
        if(binary_search(all(in), i)){
            y.pb(x[k]);
            k++;
        }
        else{
            y.pb(v[i]);
        } 
    }
    FOR(i,0,n){
        if(p[i] != y[i]){
            cout <<"NO\n";
            return;
        }
    }

    cout <<"YES\n";
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