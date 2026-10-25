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
    ll n, d; cin >> n >> d;
    vll v(n); FOR(i,0,n) cin >> v[i];
    ll left = -1, right = n-1;
    ll teamsize = 1, team = 0;
    sort(all(v));
    while(left < right){
        if(v[right] * teamsize <= d and left < right){
            left++;
            teamsize++;
        }else{
            team++;
            right--;
            teamsize = 1;
        }
    }

    cout << team << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}