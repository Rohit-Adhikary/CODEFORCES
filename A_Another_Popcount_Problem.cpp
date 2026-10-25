#include <bits/stdc++.h>
#include<bitset>
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
ll Check(ll n, ll k){
    ll sum = 0, i = 0;ll p = 0;
    while(sum <= n){
        sum = sum + 1LL << i;
        i++;
        if(i >= k) break;
        p += __builtin_popcountll(sum);
    }
    return p;
}
void Solve(){
    ll n,k; cin >> n >> k;
    if(k >= n) cout << n << endl;
    else cout << Check(n,k) << endl;


}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}