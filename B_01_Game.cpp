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
pair<ll,string> cnt(string s){
    ll c = 0;
    FOR(i,1,sz(s)){
        if(s[i-1] != s[i]){
            s.erase(i-1,2);
            c++;
        }
    }
    return {c,s};
}
void Solve(){
    string s; cin >> s;
    pair<ll,string> p;ll c = 0;
    p.fi = c; p.se = s;ll l = 100;
    while(l--){
        p = cnt(p.se);
        c += p.fi;
        if(p.se.empty())break;
    }
    cout <<((c % 2 == 0) ? "NET\n" : "DA\n");
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}