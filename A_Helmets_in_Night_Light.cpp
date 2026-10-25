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
ll get(vector<pll>& p , ll n, ll k){
    ll cost = k;
    FOR(i,0,sz(p)){
        while(p[i].se--){
            if(n == 0) return cost;
            n--;
            cost += p[i].fi;
        }
    }
    return cost + n*k;
}
void Solve(){
    ll n,k; cin >> n >> k; vll a(n),b(n);
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> b[i];
    vector<pll> p; ll op = 0;
    FOR(i,0,n){
        if(b[i] < k){
            p.eb(b[i],a[i]);
            op += b[i];
        }
    }
    if(p.empty()){
        cout << n * k << endl;
        return;
    }else{
        sort(all(p));
        ll cost = get(p,n-1,k);
        cout << cost << endl;
        
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}