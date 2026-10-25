#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<long long>;
#define FOR(i, a, b) for(int i = (a); i< (b); i++)
#define RFOR(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vmax(x) *(max_element(all(x)))
#define fast ios::sync_with_stdio(false);cin.tie(nullptr)
#define vmin(x) *(min_element(all(x)))
#define vsum(x) (ll)accumulate(all(x),0ll)
#define popcnt(x) (ll)(__builtin_popcount(x))
#define round(a,b) (a+b-1)/b
#define MAX LLONG_MAX
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()

void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    string x = s;
    sort(all(x));
    if(x == s){
        cout <<"NO\n";
        return;
    }
    else cout << "YES\n";
    ll first_index = -1; bool b = true;
    char ch1 = '0', ch2 = '0';
    FOR(i,0,n){
        if(s[i] != x[i] and b){
            first_index = i;
            cout << i+1 <<" ";
            ch1 = s[i];
            ch2 = x[i];
            b = false;
        }else if(!b){
            auto it = find(s.begin()+i, s.end(), ch2) - s.begin();
            cout << it + 1 <<" " << endl;
            return;
        }
    }
}
int main() {
    fast;
    
    Solve();
    
    return 0;
}