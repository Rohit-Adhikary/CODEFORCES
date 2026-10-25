#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
bool midCheck(ll &a, ll &b, ll &c){
    if((a+c) % 2 == 0 and ((a+c)/2) % b == 0) return true;
    else return false;
}
bool firstCheck(ll &a, ll &b, ll &c){
    if(b > c){
        if((b + (b - c)) % a == 0) return true;
        else return false;
    }else{
        if((b - (c - b)) % a == 0 and (b - c + b) > 0) return true;
        else return false;
    }
}

bool lastChek(ll &a, ll &b, ll &c){
    if(b > a){
        if((b + (b - a)) % c == 0) return true;
        else return false;
    }else{
        if((b - (a - b)) % c == 0 and (b - a + b) > 0) return true;
        else return false;
    }
}
void Solve(){
    ll a,b,c; cin >> a >> b >> c;
    bool b1 = midCheck(a,b,c);
    bool b2 = firstCheck(a,b,c);
    bool b3 = lastChek(a,b,c);
    if(b1 or b2 or b3) cout <<"YES\n";
    else cout <<"NO\n";
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}