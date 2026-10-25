#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
string get(string s){
    string x; x.pb(s.back());
    s.pop_back(); x+=s;
    return x;
}
ll Block(string s){
    ll cnt = 1;
    FOR(i,1,sz(s)){
        if(s[i] != s[i-1]) cnt++;
    }
    return cnt;
}
void Solve(){
    ll n; cin >> n; string s;
    ll c = 1;
    cin >> s; while(n--){
        c = max(c,Block(s));
        s = get(s);
    }
    cout << c << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}