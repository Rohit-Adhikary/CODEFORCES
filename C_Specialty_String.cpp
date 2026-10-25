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
bool get(string s){
    bool flag = false;
    FOR(i,1,sz(s)){
        if(s[i-1] == s[i]){
            s.erase(i-1,2);
            if(s.empty()) return true;
            return get(s);
        }
    }
    return false;
}
void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    if(get(s)) cout <<"YES" << endl;
    else cout <<"NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}