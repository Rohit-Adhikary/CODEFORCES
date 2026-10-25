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
#define vsum(x) (ll)accumulate(all(x),0ll)
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll cnt(string s, ll n){
    ll c = 0;
    FOR(i,1,n){
        if(s[i-1] != s[i]) c++;
        if(c > 2) return c;
    }
    return c;

}
void Solve(){
    string s; cin >> s;
    ll n = sz(s);
    //ll p = cnt(s,n);
    ll c1 = count(s.begin()+1, s.end()-1, '(');
    ll c2 = count(s.begin()+1, s.end()-1, ')');
    ll p = c1 - c2;
    cout <<((p == 0) ? "YES\n" : "NO\n");
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}