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
bool Check(string p, string q){
    if(sz(p) != sz(q)+3) return false;

    set<char> st_p, st_q;
    FOR(i,0,sz(p)){
        st_p.insert(p[i]);
    }
    FOR(i,0,sz(q)){
        st_q.insert(q[i]);
    }
    vll cnt_six_p(3,0);
    for(auto ch : st_q){
        if(ch != 's' and ch != 'i' and ch != 'x'){
            ll cnt = count(all(p),ch);
            ll cnt_2 = count(all(q),ch);
            if(cnt != cnt_2) return false;
        }
    }
        vll cnt_six_q(3,0);
        cnt_six_q[0] = count(all(q),'s');
        cnt_six_q[1] = count(all(q),'i');
        cnt_six_q[2] = count(all(q),'x');

        cnt_six_p[0] = count(all(p),'s');
        cnt_six_p[1] = count(all(p),'i');
        cnt_six_p[2] = count(all(p),'x');
        
        
        FOR(i,0,3){
            if(cnt_six_p[i]-1 != cnt_six_q[i]) return false;
        }

        return true;
}
void Solve(){
    ll n, m; cin >> n >> m;
    string p, q; cin >> p >> q;

    if(Check(p,q)) cout <<"YES\n";
    else cout << "NO\n";

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