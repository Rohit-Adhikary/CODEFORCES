#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(ll i =0; i<n; i++)
#define all(x) x.begin(),x.end()

ll Power(ll power, ll base, ll mod){
    ll res = 1;
    while(power){
        if(power % 2 == 1){
            res = (res * base) % mod;
            power--;
        }else{
            base = (base * base) % mod;
            power = power/ 2;
        }
    }
    return res;
}

void Solve(){
    ll n; cin >> n;
    ll b = 8;
    ll number = Power(n,b,10);
    cout << number << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}