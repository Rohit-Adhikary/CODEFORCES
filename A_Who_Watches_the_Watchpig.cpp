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
ll Check(string s,ll k,ll n){
    ll c = 0;
    FOR(i,0,k){
        if(s[i] != 'R'){
            c++;
            s[i] = 'R';
        }
        if(s[n-1-i] != 'L'){
            c++;
            s[n-1-i] = 'L';
        }
    }
    return c;
}
void Solve(){
    ll n,k; cin >> n >> k;
    string s; cin >> s;

    if(k > n/2) cout <<"-1" << endl;
    else{
        ll c = Check(s,k,n);
        cout << c << endl;
    }

}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}