#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n;
    vector<ll> price(n);
    for(ll i = 0; i<n; i++) cin >> price[i];
        cin >> m;
        sort(price.begin(),price.end());
    vector<ll> coin(m);
        for(ll i = 0; i<m; i++) cin >> coin[i];
        for(int i = 0; i<m; i++){
        ll c = upper_bound(price.begin(), price.end(),coin[i]) - price.begin();
        cout << c << endl;
    }
}