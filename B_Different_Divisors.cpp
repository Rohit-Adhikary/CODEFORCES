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

vll Prime(ll n){
    vector<ll> v;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(ll i = 2; i*i <= n; i++){
        if(prime[i]){
            for(ll j = i*i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    for(ll i = 0; i< n+1; i++){
        if(prime[i])v.pb(i);
    }
    return v;
}
void Solve(){
    ll d; cin >> d;
    ll n = 50000; ll a,b;
    vll v = Prime(n);
    for(ll i = 0; i<(int)v.size(); i++){
        if(v[i] - 1 >= d){
            a = v[i];
            break;
        }
    }
    for(ll i = 0; i<(int)v.size(); i++){
        if(v[i] - a >= d){
            b = v[i];
            break;
        }
    }
    cout << a*b << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}