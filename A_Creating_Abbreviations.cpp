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
string Distinct(string s){
    unordered_set<char> u;
    for(auto i:s) u.insert(i);
    s.clear();
    for(auto i:u) s.pb(i);
    return s;
}
bool Check(string s, string v){
    ll x = 0, c = 0;
    s = Distinct(s);
    FOR(i,0,sz(v)){
        auto it = find(s.begin() + x, s.end(), v[i]);
        if(it == v.end()) return false;
        else{
            x = it - s.begin() + 1;
            c++;
        }
    }
    return true;
}
void Solve(){
    ll n,w; cin >> n >> w; string y,s;
    vector<string> v(w);
    FOR(i,0,n){
        cin >> y;
        s.pb(y.front());
    }
    FOR(i,0,w) cin >> v[i];
    FOR(i,0,w){
        if(!Check(s,v[i])){
            cout <<"NO\n";
            return;
        }
    }
    cout << "YES\n";
    
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}