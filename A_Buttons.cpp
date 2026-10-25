#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c % 2 == 1) cout <<((a >= b) ? "First\n" : "Second\n");
    else cout <<((a > b) ? "First\n" : "Second\n");
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}