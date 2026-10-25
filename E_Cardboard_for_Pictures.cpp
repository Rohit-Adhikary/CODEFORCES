#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(ll i = (a); i< (b); i++)
#define RFOR(i, a, b) for(ll i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define ceil_div(a,b) (((a) + (b) - 1) / (b))
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define mod 1e9 + 7
#define Rohit_Adhikari cerr << "Time: " << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC << "s\n";
ll squareSum(vll &v, ll n){
    ll sum = 0;
    FOR(i,0,n) sum += (v[i]*v[i]);
    return sum;
}

pair<double,double> quadreticSoln(double a, double b, double cnst){
    double x1 = 0, x2 = 0;
    if((b*b) >= 4*a*cnst) x1 = ((-1)*b + sqrt(b*b - (4*a*cnst)))/(2*a);
    x2 = ((-1)*b + sqrt(b*b + (4*a*cnst)))/(2*a);
    return {x1, x2};
}
void Solve(){
    ll n, c; cin >> n >> c;
    vll v(n); FOR(i,0,n) cin >> v[i];

    ll sum = vsum(v);
    ll square_sum = squareSum(v,n);
    double a = (double)n, b = (double)sum, cnst = (c - (double)square_sum)/4.0;
    pair<double,double> x = quadreticSoln(a,b,cnst);

    ll y = round(x.se);
    cout << y << "\n";
}
int main() {
    fast;
    auto start_time = clock();
    ll t;
    cin >> t;
    while(t--) Solve();
    auto end_time = clock();
    //Rohit_Adhikari
    
    return 0;
}