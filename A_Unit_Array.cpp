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
bool Unit(ll minusOne, ll one){
    return ((minusOne % 2 == 0) and (one >= minusOne));
}
void Solve(){
    ll n; cin >> n;
    vll v(n); ll minusOne = 0, one = 0,c = 0;
    FOR(i,0,n){
        cin >> v[i];
        (v[i] > 0) ? one++ : minusOne++;
    }
    while(true){
        if(Unit(minusOne,one)){
            cout << c << endl;
            break;
        }
        else{
            c++;
            minusOne--;
            one++;
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