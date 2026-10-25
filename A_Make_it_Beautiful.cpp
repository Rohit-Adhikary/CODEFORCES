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
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    sort(rall(v));
    ll M = v[0];
    int c = count(all(v),M);
    if(c == n) cout <<"NO" << endl;
    else{
        cout << "YES" << endl;
        cout << v[0]<<" " << v[n-1] <<" ";
        FOR(i,1,n-1){
            cout << v[i] <<" ";
        }
        cout <<"\n";
    }
    
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}