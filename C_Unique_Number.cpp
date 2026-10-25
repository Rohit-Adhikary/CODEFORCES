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
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll Uniq(ll n){
    string s; char x;
    RFOR(i,0,10){
        n -= i;
        x = i + '0';
        s.pb(x);
        if(n < i){
            x =n + '0';
            s.pb(x);
            break;
        }
    }
    sort(all(s));
    n = (ll)stoi(s);
    return n;
}
void Solve(){
    ll n; cin >> n;
    if(n <= 9) cout << n << endl;
    else if(n > 45) cout << -1 << endl;
    else{
        cout << Uniq(n) << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}