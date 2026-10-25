#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(ll i =0; i<n; i++)
#define all(x) x.begin(),x.end()
#define MAX LLONG_MAX

void Solve(){
    ll n,k,sum = 0; cin >> n >> k;
    vl v(n); loop(i,n){
        cin >> v[i];
        sum = sum + v[i];
    }
    if(sum % 2 == 1) cout <<"YES"<< endl;
    else{
        cout <<((k*n % 2 == 0) ? "YES" : "NO")<< endl;
    }
    
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}