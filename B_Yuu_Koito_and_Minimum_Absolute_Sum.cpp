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
void get(vll v, ll n){
        FOR(i,0,n){
            if(v[i] == -1) cout << 0 <<" ";
            else cout << v[i] <<" ";
        }
        cout << endl;
}
void Solve(){
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    if(v.front() == v.back() and v.front() == -1){
        cout <<0 << endl;
        get(v,n);
    } else if(v.front() != -1 and v.back() == -1){
        v.back() = v.front();
        cout <<0<< endl;
        get(v,n);
    }else if(v.front() == -1){
        cout << 0 << endl;
        v.front() = v.back();
        get(v,n);
    }else{
        cout << abs(v.back() - v.front()) << endl;
        get(v,n);
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}