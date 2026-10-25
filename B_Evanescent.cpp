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
ll getcount(string s, ll n, ll i){
    if(s[i-1] == s[i+1]){
        if(s[i-1] != s[i]) return 2;
        else return 0;
    }else{
        if(s[i-1] != s[i] and s[i] != s[i+1]) return 1;
        else return 0;
    }
}
ll getBlock(string s, ll n){
    ll c = 1;
    FOR(i,1,n){
        if(s[i] != s[i-1]) c++;
    }
    return c;
}
void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    ll block = getBlock(s,n);
    ll ans = 0;
    FOR(i,1,n-1){
        ll a = getcount(s,n,i);
        ans = max(ans,a);
    }
    cout << block - ans << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}