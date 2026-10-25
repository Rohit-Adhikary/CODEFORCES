#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll n; cin >> n; vector<ll> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    ll c = 0;
    for(int i = 1; i<n; i++){
        if(v[i-1] > v[i]) c++;
    }
    cout << n+c << endl;
    cout << v[0] <<" ";
    for(int i = 1; i<n; i++){
        if(v[i-1] > v[i]){
            cout << v[i] <<" " << v[i] <<" ";
            
        }else cout << v[i] <<" ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}