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
    ll a,b, xK, yK, xQ, yQ;
    cin >> a >> b >>  xK >> yK >> xQ >> yQ;
    vector<pll> pK, pQ;
    
    pK.eb(xK+a, yK+b);
    pK.eb(xK+a, yK-b);
    pK.eb(xK-a, yK+b);
    pK.eb(xK-a, yK-b);
    pK.eb(xK+b, yK+a);
    pK.eb(xK+b, yK-a);
    pK.eb(xK-b, yK+a);
    pK.eb(xK-b, yK-a); 

    pQ.eb(xQ+a, yQ+b);
    pQ.eb(xQ+a, yQ-b);
    pQ.eb(xQ-a, yQ+b);
    pQ.eb(xQ-a, yQ-b);
    pQ.eb(xQ+b, yQ+a);
    pQ.eb(xQ+b, yQ-a); 
    pQ.eb(xQ-b, yQ+a);
    pQ.eb(xQ-b, yQ-a); 

    set<pll> pK_set(pK.begin(), pK.end()); 
    set<pll> ans(pQ.begin(), pQ.end());
    ll cnt = 0;
    
    for(auto &pos: pK_set){
        if(ans.count(pos)) cnt++;
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}