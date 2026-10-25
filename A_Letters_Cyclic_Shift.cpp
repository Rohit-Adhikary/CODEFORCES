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
string get(string s){
    ll index_a = s.find("a");
    bool flag = false;
    FOR(i,0,sz(s)){
        if(s[i] != 'a'){
            s[i] -= 1;
            flag = true;
        }else if(s[i] == 'a' and flag) break;
    }
    return s;
}
void Solve(){
    string s; cin >> s;
    string x = get(s);
    if(s == get(s)){
        if(x.back() == 'a') x.back() = 'z';
        else x.back() -= 1;
    }
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}