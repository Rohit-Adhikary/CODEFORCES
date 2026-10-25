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
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
string Check(string a, string b, ll x){
    string s; ll n = sz(a);
    FOR(i,0,x+1){
        s = a.substr(i, n-x);
        size_t f = b.find(s);
        if(f != string::npos) return s;
    }
    return "-1";
}
void Solve(){
    string a,b; cin >> a >> b;
    if(sz(a) < sz(b)){
        FOR(i,0,sz(a)){
            string p = Check(a,b,i);
            if(p != "-1"){
                ll s_a = sz(a);
                ll s_b = sz(b);
                ll s_p = sz(p);

                cout << s_a - s_p + s_b - s_p << endl;
                return;
            }
        }
    }else{
        FOR(i,0,sz(b)){
            string p = Check(b,a,i);
            if(p != "-1"){
                ll s_a = sz(a);
                ll s_b = sz(b);
                ll s_p = sz(p);

                cout << s_a - s_p + s_b - s_p << endl;
                return;
            }
        }
    }
    cout << sz(a) + sz(b) << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}