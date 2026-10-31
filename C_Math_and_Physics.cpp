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


bool only_first(vll v, ll n){
    FOR(i,1,n){
        if(v[i] != 1) return false;
    }
    return true;
}
bool only_last(vll v, ll n){
    FOR(i,0,n){
        if(i < n-1) if(v[i] != 1) return false;
    }
    return true;
}
bool both(vll v, ll n){
    if(only_first(v,n) or only_last(v,n)) return false;
    FOR(i,1,n-1) if(v[i] != 1) return false;
    return true;
}
void Solve(){
    ll n; cin >> n; vll v(n,0);
    bool b = false;
    ll sum = 0;
    FOR(i,0,n){
        cin >> v[i];
        if(v[i] != 1) b = true;
        sum += v[i];
    }
    if(!b){
        cout <<-1 <<"\n";
        return;
    }

    if(only_first(v,n)) cout << v[0] <<"\n";
    else if(only_last(v,n)) cout << v.back() <<"\n";
    else if(both(v,n)) cout << (v[0] + v.back())- 1 <<"\n";
    else cout << sum-1 << "\n";
    
    
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