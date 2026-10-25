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
bool XOR(vll b){
    int s = sz(b);
    ll x = b[0];
    FOR(i,1,s){
        x = x^b[i];
    }
    if(x == 0) return true;
    else return false;
}
void Solve(){
    ll n; cin >> n;
    vll v(n); FOR(i,0,n) cin >> v[i];
    vll b;
    FOR(i,0,257){
        ll sum = 0;
        for(int j = 0; j<n; j++){
            b.push_back(v[j]^i);
        }
        if(XOR(b)){
            cout << i <<endl;
            return;
        }else b.clear();
    }
    cout << "-1" << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}