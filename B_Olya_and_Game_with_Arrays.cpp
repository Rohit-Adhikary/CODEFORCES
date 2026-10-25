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
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll n; cin >> n;
    vector<vll> v(n); ll m;
    FOR(i,0,n){
        cin >> m;
        for(ll j = 0; j<m; j++){
            ll x ; cin >> x;
            v[i].pb(x);
        }
        sort(all(v[i]));
    }
    ll min_val = MAX, min_in = 0,low_in = 0;
    ll lowest_val = MAX, sum = 0;
    FOR(i,0,n){
        if(min_val > v[i][1]){
            min_val = v[i][1];
            min_in = i;
        }

        sum += v[i][1];

        if(lowest_val > v[i][0]){
            lowest_val = v[i][0];
            low_in = i;
        }
    }
    cout << sum - v[min_in][1] + v[low_in][0] << endl;

}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}