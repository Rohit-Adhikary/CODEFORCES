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
ll Check(vll v, ll n){
    ll c = 0;
    FOR(i,1,n){
        if(v[i-1] % 2 == 0 and v[i] % 2 == 0) c++;
        else if(v[i-1] % 2 == 1 and v[i] % 2 == 1) c++;
    }
    return c;
}
void Solve(){
    ll n; cin >> n; vll v(n); vll g;
    FOR(i,0,n) cin >> v[i];
    ll ans = Check(v,n);
    cout << ans << endl;
    
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}