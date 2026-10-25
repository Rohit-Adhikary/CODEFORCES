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
    string x; ll c = 0, c2 = 0, c13 = 0;
    string s; cin >> s;ll size = sz(s); FOR(i,0,size){
        if(s[i] == '4')c++;
        else x += s[i];
    }
    size = sz(x); FOR(i,0,size){
        if(x[i] == '2') c2++;
        else{
            c2 = min(c2,c13);
            c13++;
        }
    }
    c += min(c2,c13);
    cout << c << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}