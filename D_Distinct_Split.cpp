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
#define vsum(x) (ll)accumulate(all(x),0ll)
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
ll Check(const map<char,ll>& m1, const map<char,ll>& m2){
    return sz(m1) + sz(m2);
}
void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    unordered_set<char> st;
    vll prefix(n+1,0), suffix(n+1,0);
    FOR(i,1,n+1){
        st.insert(s[i-1]);
        prefix[i] = sz(st);
    }
    st.clear();
    RFOR(i,1,n+1){
        st.insert(s[i-1]);
        suffix[i] = st.size();
    }
    ll ans = 0;
    FOR(i,0,n){
        ans = max(ans, prefix[i] + suffix[i+1]);
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}