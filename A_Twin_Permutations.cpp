#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    int MAX = n+1;
    for(int i = 0; i<n; i++) cout << MAX - v[i] <<" ";

    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}