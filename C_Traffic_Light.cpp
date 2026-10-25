#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll Check(ll a, const vll& green, ll n){
    ll x = MAX;
    auto b = upper_bound(all(green),a);
    if(b != green.end()){
        x = (*b) - a;
    }else{
        ll min_val = green.front();
        x =  (n-1-a)+(min_val - 0 + 1);
    }
    return x;
}
void Solve(){
    ll n; cin >> n; char ch;
    cin >> ch; string s; cin >> s;
    vll a,green;
    FOR(i,0,n){
        if(s[i] == ch) a.pb(i);
        if(s[i] == 'g') green.pb(i);
    }
    ll x = 0;
    if(ch == 'g'){
        cout << 0 << endl;
        return;
    }
    FOR(i,0,sz(a)){
        x = max(x, Check(a[i],green,n));
    }
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}