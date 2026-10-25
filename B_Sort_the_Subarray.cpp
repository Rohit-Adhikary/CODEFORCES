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
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll n; cin >> n; vll a(n), b(n);
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> b[i];

    ll first_index = -1, last_index = -1;

    FOR(i,0,n){
        if(a[i] != b[i]){
            if(first_index == -1){
                first_index = i;
            }else{
                last_index = i;
                break;
            }
        }
    }

    ll i = first_index;
    
    while( i>= 0 ){
        if(b[i] <= b[i+1]) i--;
        else break;
    }
    first_index = i + 1;
    if(last_index == -1) last_index = n-1;

    ll j = last_index + 1;
    while(j < n){
        if(b[j] >= b[j-1]) j++;
        else break;
    }

    last_index = j;

    cout << first_index+1 << " " << last_index << endl;
}
int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}