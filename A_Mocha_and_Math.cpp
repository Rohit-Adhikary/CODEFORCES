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
#define popcnt(x) (ll)(__builtin_popcount(x))
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
string Check(string max_str,string s, vll& index){
    FOR(i,0,sz(index)){
        if(s[index[i]] == '0') max_str[index[i]] = '0';
    }
    return max_str;
}
ll getVal(string s){
    ll n = sz(s);
    ll val = 0;
    FOR(i,0,n){
        val += ((s[(n-1-i)] - '0') * (1LL << i));
    }
    return val;
}
void Solve(){
    ll n; cin >> n; vll v(n); vector<string> s;
    ll max_val = LLONG_MIN, min_p = LLONG_MAX;
    FOR(i,0,n){
        cin >> v[i];
        max_val = max(max_val, v[i]);
        bitset<32> b(v[i]);
        s.pb(b.to_string());
    }
    bitset<32> b(max_val);
    string max_string = b.to_string();
    vll index;
    FOR(i,0,sz(max_string)) if(max_string[i] == '1') index.pb(i);
    string result = max_string;
    FOR(i,0,sz(s)){
        result = Check(result, s[i], index);
    }
    ll ans = getVal(result);
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}