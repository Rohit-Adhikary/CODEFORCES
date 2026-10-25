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
    ll n, k ; cin >> n >> k; string s; ll c = 0;
    cin >> s; set<char> p; vll x;
    FOR(i,0,n){
        p.insert(s[i]);
    }
    for(auto i:p){
        ll y = count(all(s),i);
        x.pb(y);
    }
    sort(all(x));
    ll m = n-k;
    if(m % 2 == 0){
        FOR(i,0,(int)x.size()){
            if(x[i] % 2 != 0){
                x[i]--;
                c++;
            }
        }
        cout << ((k >= c and (k-c) % 2 == 0) ? "YES\n" : "NO\n");
    }else{
        ll in  = -1;
        reverse(all(x));
        FOR(i,0,(int)x.size()){
            if(x[i] % 2 != 0){
                in = i;
                break;
            }
        }
        if(in == -1){
            ll move = k - 1;
            cout << ((move % 2 == 0) ? "YES\n" : "NO\n");
        }else{
            FOR(i,0,(int)x.size()){
                if(x[i] % 2 != 0 and i != in) c++;
            }
            cout <<((k >= c and (k-c) % 2 == 0) ? "YES\n" : "NO\n");
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