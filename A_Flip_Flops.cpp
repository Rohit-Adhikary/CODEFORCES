#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(ll i =0; i<n; i++)
#define all(x) x.begin(),x.end()
#define MAX LLONG_MAX

void Solve(){
    ll n, c, k; cin >> n >> c >> k;
    vl v(n); loop(i,n) cin >> v[i];
    sort(all(v));
    loop(i,n){
        if(v[i] <= c){
            ll d = c - v[i];
            if(k < d){
                d = k;
            }
            c = c + d + v[i];
            k = k - d;
        } else break;
    }
    cout << c << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}