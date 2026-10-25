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
bool Check(int a,int b, int c){
    if(a == b or b == c or a == c) return true;
    else return false;
}
void Solve(){
    int a,b,c; cin >> a >> b >> c;
    vi v = {a,b,c};
    sort(all(v));
    int M = v[2];
    int mi = v[0];
    int cnt = 0;
    while(true){
        if(Check(v[2],v[1],v[0])){
            cout << cnt << endl;
            return;
        }else{
            v[2]--;
            v[0]++;
            cnt++;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}