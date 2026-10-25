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
bool check(ll zero,ll one,ll two,ll three,ll five){
    if(zero >= 3 and two >= 2 and three >= 1 and five >= 1 and one >= 1) return true;
    return false;
}
void Solve(){
    ll n; cin >> n; vll v(n);
    FOR(i,0,n) cin >> v[i];
    ll zero = 0, three = 0, two = 0, five = 0,one = 0;
    FOR(i,0,n){
        if(v[i] == 0) zero++;
        else if(v[i] == 1) one++;
        else if(v[i] == 2) two++;
        else if(v[i] == 3) three++;
        else if(v[i] == 5) five++;

        if(check(zero,one,two,three,five)){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}