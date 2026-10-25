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
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll Move2(ll a, ll b){
    ll c = 0; 
    if( b == 1){
        b++;
        c++;
    }
    while(a > 0){
        a = a / b;
        c++;
    }
    return c;
}
ll Move1(ll a,ll b){
    ll ans = MAX;
    FOR(i,b,b+100){
        ll x = Move2(a,i);
        x += (i - b);
        ans = min(ans,x);
    }
    return ans;
}
void Solve(){
    ll a,b, c = 0; cin >> a >> b;
    cout << Move1(a,b) << endl;
    
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}