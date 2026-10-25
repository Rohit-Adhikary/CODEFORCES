#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll n; cin >> n; vector<ll> v(n-1);
    ll sum = 0;
    for(int i = 0; i<n-1; i++){
        cin >> v[i];
        sum += v[i];
    }
    cout << (-1)*sum << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}