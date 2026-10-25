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

void Sum(vll v, ll size, ll in, ll k){
    ll c = 1, sum = 0;
    for(ll i = in; i< size; i+=in+1){
        if(c <= k){
            sum += v[i];
            c++;
        }else break;
    }
    cout << sum << endl;
}
void Solve(){
    ll n,k; cin >> n >> k;
    ll size = n*k; vll v(size);
    FOR(i,0,size) cin >> v[i];
    sort(rall(v));
        ll in = n/2;
        Sum(v,size,in,k);
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}