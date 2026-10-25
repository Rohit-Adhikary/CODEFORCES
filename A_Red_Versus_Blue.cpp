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
    ll n, r, b; cin >> n >> r >> b;
    ll max_block = (r+b)/(b+1);
    ll block = r/max_block;
    ll extra_block = r % max_block;
    ll j = 0, r_cnt = 0, b_cnt = 0;
    string s;
    FOR(i,0,n){
        if(r_cnt >= r or b_cnt >= b) break;
        if(j <  max_block){
            s.pb('R');
            j++; r_cnt++;
        }else{
            s.pb('B');
            j = 0; b_cnt++;
        }
    }
    FOR(i,r_cnt,r) s.pb('R');
    vll v, m; ll x = b - b_cnt;
    v.pb(0);
    ll y = max_block/2;
    FOR(i,0,sz(s)) if(s[i] == 'B') v.pb(i);
    FOR(i,0,sz(v)) m.pb(v[i] + y);
    ll i = 0;
    while(x--){
        s.insert(m[i],1,'B');
        i++;
    }
    cout << s << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}