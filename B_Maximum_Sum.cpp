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
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
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

void Solve(){
    ll n,k; cin >> n >> k; vll v(n);

    FOR(i,0,n) cin >> v[i];
    
    sort(all(v));
    vll prefix_sum(n);
    prefix_sum[0] = v[0];
    FOR(i,1,n) prefix_sum[i] = prefix_sum[i-1] + v[i];
    ll sum = 0, ans = 0;
    FOR(i,0,k+1){
        ll j = k - i;
        ll left = 2*i;
        ll right = n-j-1;

        if(left == 0) sum = prefix_sum[right] - 0;
        else sum = prefix_sum[right] - prefix_sum[left-1];
        ans = max(sum,ans);
    }
    cout << ans << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}