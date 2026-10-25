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
vll Check(vll v,ll n, ll k){
    ll c = 0; vll m; bool flag = false;
    FOR(i,1,n){
        if(abs(v[i-1] - v[i]) <= k){
            c++; flag = false;
        }else{
            m.pb(c);
            c = 0; flag = true;
        }
    }
    if(!flag)m.pb(c);
    return m;
}
void Solve(){
    ll n,k; cin >> n >> k;
    vll v(n); FOR(i,0,n) cin >> v[i];
    sort(all(v));
    vll m = Check(v,n,k);
    ll M = *(max_element(all(m)));
    M += 1;
    cout << n - M<< endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}