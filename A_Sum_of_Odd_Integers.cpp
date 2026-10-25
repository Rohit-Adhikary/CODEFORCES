#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string Odd(ll n, ll k){
    if(k % 2 == 0){
        if(n % 2 == 0){
            
        }
        else return "NO";
    }
}
int main(){
    int t;
    cin >> t;
    vector<pair<ll,ll>> v(t);
    for(int i = 0; i<t; i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i<t; i++){
        cout << Odd(v[i].first, v[i].second) << endl;
    }
}