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

void Solve(){
    ll x,n; cin >> x >> n;
    if(x % 2 == 0){
        if(n % 4 == 1) cout << x - n << endl;
        else if(n % 4 == 2) cout << x + n - n + 1 << endl;
        else if(n % 4 == 3) cout << x + n + n - 1 - n + 2 << endl;
        else cout << x << endl;
    }else{
        if(n % 4 == 1) cout << x + n << endl;
        else if(n % 4 == 2) cout << x - n + n - 1 << endl;
        else if(n % 4 == 3) cout << x - n - n + 1 + n - 2 << endl;
        else cout << x << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}