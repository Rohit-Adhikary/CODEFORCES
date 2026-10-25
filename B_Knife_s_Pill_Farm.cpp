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
ll calSum(multiset<ll>& s, ll a, ll sum){
    auto it = prev(s.end());
    ll val = *it;
    if(val > a){
        sum = sum - val + a;
        s.erase(it);
        s.insert(a);
    }
    return sum;
}
void Solve(){
    ll n, m; cin >> n >> m;
    vll a(n); FOR(i,0,n) cin >> a[i];
    vll pill; multiset<ll> s; ll sum = 0;
    if(m == 1){
        cout << vmax(a) <<"\n";
        return;
    }
    FOR(i,0,m-1) s.insert(a[i]);
    for(auto i : s) sum += i;
    pill.pb(sum);
    FOR(i,m-1,n-1){
        sum = calSum(s, a[i], sum);
        pill.pb(sum);
    }
    ll ans = LLONG_MIN;
    FOR(i,0,sz(pill)){
        ans = max(ans, a[i+m-1]*m - pill[i]);
    }
    cout << ans <<"\n";

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