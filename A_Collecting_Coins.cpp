#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c,n;
        cin >> a >> b >> c >> n;
        ll m = max(a,b);
        m = max(m,c);

        ll need = (m - a) + ( m - b) + (m - c);
        ll x = n - need;

        if(x % 3 == 0 & x >=0) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
}