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
vll makeVector(vll v){
    ll s = sz(v); ll c = 0;
    RFOR(i,1,s){
        while(v[i-1] >= v[i] and v[i-1]  > 0){
            v[i-1] = v[i-1]/2;
            c++;
        }  
    }
    v.pb(c);
    return v;
}
bool Check(vll v){
    FOR(i,1,sz(v)){
        if(v[i-1] >= v[i]) return false;
    }
    return true;
}
bool isPossible(vll v){
    FOR(i,0, sz(v)-1){
        if(v[i] >= v[i+1]) return false;
    } 
    return true;
}

void Solve(){
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    ll c = 0;

    while(true){
        if(Check(v)){
            cout << c << endl;
            return;
        }


        v = makeVector(v);
        c += v.back();
        v.pop_back();
        
        
        if(!isPossible(v)){
            cout << -1 << endl;
            return;
        }
        
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}