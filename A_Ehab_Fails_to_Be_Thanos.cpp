#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    int n; cin >> n;
    int s = 2*n;
    vector<ll> v(s);
    for(int i = 0; i<s; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i<n; i++){
        sum1 += v[i];
        sum2 += v[n+i];
    }
    if(sum1 == sum2) cout <<"-1" << endl;
    else{
        for(int i = 0; i< s; i++) cout << v[i] <<" ";
        cout << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}