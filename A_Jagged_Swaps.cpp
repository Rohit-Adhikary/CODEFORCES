#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(){
    ll n; cin >> n; vector<ll> v(n); 
    for(int i = 0; i<n; i++) cin >> v[i];
    if(v.front() == 1) cout <<"YES" << endl;
    else cout <<"NO"<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}