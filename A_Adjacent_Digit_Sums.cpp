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
bool Check(ll x, ll y){
    ll d = abs(x-y);
    FOR(i,1,1000){
        if(d == ((i*9)-1) and x > y) return true;
    }
    return false;
}
void Solve(){
    ll x,y; cin >> x >> y;
    if(abs(x-y) == 1 and x < y) cout <<"Yes\n";
    else if(Check(x,y)) cout <<"Yes\n";
    else cout << "No\n";
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}