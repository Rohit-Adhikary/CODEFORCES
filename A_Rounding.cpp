#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
    ll n;
    cin >> n;
    if(n % 10 == 0) cout << n ;
    else{
        ll a = (n/10 + 1)*10 - n;
        if(a>=5) cout << (ll)(n/10)*10;
        else cout << (ll)(n/10 + 1)*10;
    }
    return 0;
}