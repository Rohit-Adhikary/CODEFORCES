#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> b,c;
    for(int i = 0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll MAX = v.back();
    for(int i = 0; i<n; i++){
        if(v[i] == MAX) c.push_back(MAX);
        else b.push_back(v[i]);
    }
    if(b.empty()) cout << "-1" << endl;
    else{
        cout << (int)b.size() <<" " << (int)c.size() << endl;
        for(int i = 0; i < (int)b.size(); i++) cout << b[i]<<" ";
        cout <<"\n";
        for(int i = 0; i < (int)c.size(); i++) cout << c[i]<<" ";
        cout <<"\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}