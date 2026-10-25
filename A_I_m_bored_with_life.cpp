#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long long fact(ll x){
    ll f = 1;
    while(true){
        f = f * x;
        x--;
        if(x == 1) return f;
    }
}
int main(){
    long long a , b;
    cin >> a >> b;
    ll x = min(a,b);
    if(x == 1) cout << x << endl;
    else cout << fact(x) << endl;
}