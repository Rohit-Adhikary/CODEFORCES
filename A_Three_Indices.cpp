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
ll leftCheck(vll v, ll in){
    FOR(i,0,in){
        if(v[i] < v[in])
            return i+1;
    }
    return -1;
}
ll rightCheck(vll v, ll in){
    FOR(i,in+1,sz(v)){
        if(v[in] > v[i]) return i+1;
    }
    return -1;
}
void Solve(){
    ll n; cin >> n;
    vll v(n); FOR(i,0,n) cin >> v[i];
    FOR(i,1,n-1){
        if(leftCheck(v,i) != -1 and rightCheck(v,i) != -1){
            cout <<"YES" << endl;
            cout << leftCheck(v,i) << " " << i+1 << " " << rightCheck(v,i) << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}