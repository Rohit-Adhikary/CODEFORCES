#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(ll i =0; i<n; i++)
#define all(x) x.begin(),x.end()
#define MAX LLONG_MAX

void Solve();
bool Half(int a, int b){
    if(a > b) swap(a,b);

    if((a+1)*2 >= b) return 1;
    else return 0;
}
void Solve(){
    int a,b,c,d; cin >> a >> b >> c >> d;
    ll M = max(a,b); ll m = min(a,b);
    if(c < a or d <b){
        cout <<"NO\n";
        return;
    }
    c=c-a; d=d-b;
    if(Half(a,b) and Half(a,b)) cout <<"YES\n";
    else cout <<"NO\n";
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}