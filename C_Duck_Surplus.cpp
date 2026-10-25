#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i<n; i++) cin >> v[i];
        for(ll i = 1; i<n; i++){
            if(v[i-1] > v[i]){
                v[i] = v[i-1]+v[i];
            }
        }
        cout << v.back() << endl;
    }
    
}