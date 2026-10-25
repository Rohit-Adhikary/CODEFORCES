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
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll Check(vll v, ll n, ll add, ll in){
    FOR(i,in,n){
        v[i] += add;
    }
    FOR(i,in+1,n){
        if(v[i] - v[i-1] >= 2) return v[i-1]+1;
    }
    return v.back()+1;
}
void Solve(){
    ll n; cin >> n; vll v(n); ll add = 0;
    FOR(i,0,n) cin >> v[i];
    sort(all(v)); ll ans = LLONG_MIN;
    FOR(i,0,n){
        if(v[i] < 0){
            add = abs(v[i]);
            ans = max(ans, Check(v,n,add,i));
        }else{
            add = (-1)*(v[i]);
            ans = max(ans,Check(v,n,add,i));
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}