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
    ll maxIndex = 0, minIndex = 0, needValue = 0; bool flag = true;
    ll n; cin >> n; vll v(n),m; FOR(i,0,n){
        cin >> v[i];
        m.pb(n-i);
    }
    FOR(i,0,n){
        if(v[i] != m[i]){
            minIndex = i;
            needValue = m[i];
            break;
        }
    }
    FOR(i,0,n){
        if(v[i] == needValue){ 
            maxIndex = i;
            break;
        }
    }
    reverse(v.begin()+minIndex, v.begin()+maxIndex+1);
    FOR(i,0,n) cout << v[i] <<" "; cout << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}