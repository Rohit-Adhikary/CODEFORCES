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

void Solve(){
    ll n; cin >> n; vll div2,div3,div6,div;
    vll v(n); FOR(i,0,n){
        cin >> v[i];
        if(v[i] % 6 == 0) div6.pb(v[i]);
        else if(v[i] % 2 == 0) div2.pb(v[i]);
        else if(v[i] % 3 == 0) div3.pb(v[i]);
        else div.pb(v[i]);
    }
    int s2 = sz(div2) , s3 = sz(div3), s6 = sz(div6), s = sz(div);
    FOR(i,0,s2) cout << div2[i] <<" ";
    FOR(i,0,s) cout << div[i] <<" ";
    FOR(i,0,s3) cout << div3[i] <<" ";
    FOR(i,0,s6) cout << div6[i] <<" ";
    cout <<'\n';
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}