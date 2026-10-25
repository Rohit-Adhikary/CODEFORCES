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
string Seq(){
    string s = "0";
    for(ll i = 1; i< 10000; i++){
        string x = to_string(i);
        s += x;
    }
    return s;
}
void Solve(){
    int n;
    cin >> n;
    string s = Seq();
    cout << s[n] <<endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}