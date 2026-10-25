#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define ceil_div(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
#define Rohit_Adhikari cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";
ll maxCount(const string& s){
    ll n = sz(s);
    ll lmax = 0, c = 0;
    for(char ch : s){
        if(ch == '1'){
            c++;
            lmax = max(lmax, c);
        }else c = 0;
    }

    ll pre = 0;
    FOR(i,0,n){
        if(s[i] == '1') pre++;
        else break;
    }
    ll suff = 0;
    RFOR(i,0,n){
        if(s[i] == '1') suff++;
        else break;
    }
    ll x = min(suff + pre, n);
    return max({lmax,x});
}
void Solve(){
    string s; cin >> s;
    ll maxBlock = maxCount(s);
    if(maxBlock == 1){
        cout << 1 <<"\n";
        return;
    }
    if(maxBlock == sz(s)){
         cout << maxBlock * maxBlock <<"\n";
         return;
    }
    cout << (ll)ceil((double)maxBlock/2) * (maxBlock/2+1) <<"\n";
}
int main() {
    fast;
    auto start_time = clock();
    ll t;
    cin >> t;
    while(t--) Solve();
    auto end_time = clock();
    //Rohit_Adhikari
    
    return 0;
}