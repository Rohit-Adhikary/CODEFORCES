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
#define max(x) *(max_element(all(x)))
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll a,b,c,d; cin >> a >> b >> c >> d ;
    vll v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    sort(all(v));
    FOR(i,0,sz(v)){
        if(v[i] != i+1){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 5 << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}