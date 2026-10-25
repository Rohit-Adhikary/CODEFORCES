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
    ll n,m; cin >> n >> m; vll a(n), b(m);
    FOR(i,0,n) cin >> a[i]; FOR(i,0,m) cin >> b[i];
    if(n < 2*m) cout << "NO" << endl;
    else{
        ll maxA = *(max_element(all(a)));
        ll minA = *(min_element(all(a)));
        ll maxB = *(max_element(all(b)));
        ll minB = *(min_element(all(b)));
        if(maxA < maxB or minA > minB) cout << "NO" << endl;
        else{
            sort(all(a));
            sort(all(b));
            bool flag = true;
            FOR(i,0,m){
                if(a[i] > b[i] or a[n-m+i] < b[i]){
                    flag = false;
                    break;
                }
            }
            cout << ((flag) ? "YES" : "NO") << endl;
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