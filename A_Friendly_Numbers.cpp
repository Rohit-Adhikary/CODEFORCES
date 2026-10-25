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
ll digit(string);
bool check(ll,ll);
void Solve();

ll Digit(string s){
    ll si = sz(s); ll dy = 0;
    FOR(i,0,si){
        dy += (s[i] - '0');
    }
    return dy;
}
bool check(ll y,ll x){
    string s = to_string(y);
    if(y - Digit(s) == x) return true;
    else return false;
}

void Solve(){
    ll n; cin >> n; string s = to_string(n); ll c = 0;
    for(ll i = n+1; i<= (n+100); i++){
        if(check(i,n))c++;
    }
    cout << c << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}