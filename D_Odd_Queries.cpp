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

void Solve(){
    ll n, q; cin >> n >> q;
    vll p(n+1); ll sum = 0;
    vll a(n); FOR(i,0,n){
        cin >> a[i];
        sum += a[i];
    }
    ll totalSum = sum;
    FOR(i,0,n){
        p[i+1] = a[i] + p[i];
    }
    while(q--){
        ll l, r , k; 
        cin >> l >> r >> k;
        ll ans = totalSum - (p[l-1] - p[r]) + (r - l + 1)*k;

        cout << ((ans % 2 == 1) ? "YES\n":"NO\n");
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}