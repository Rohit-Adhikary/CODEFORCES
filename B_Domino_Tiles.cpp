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
ll checkFirst(string s){
    if(s[1] == '0'){
        FOR(i,0,sz(s)){
            if(i % 4 == 0 or (i-1) % 4 == 0){
                if(s[i] != '0' and s[i] != '?') return 0;
            }else{
                if(s[i] != '1' and s[i] != '?') return 0;
            }
        }
        return 1;
    }else if(s[1] == '1'){
        FOR(i,0,sz(s)){
            if(i % 4 == 0 or (i+1) % 4 == 0){
                if(s[i] != '0' and s[i] != '?') return 0;
            }else{
                if(s[i] != '1' and s[i] != '?') return 0;
            }
        }
        return 1;
    }
}

ll checkSecond(string s){
    if(s[1] == '0'){
        FOR(i,0,sz(s)){
            if(i % 4 == 0 or (i+1) % 4 == 0){
                if(s[i] != '1' and s[i] != '?') return 0;
            }else{
                if(s[i] != '0' and s[i] != '?') return 0;
            }
        }
        return 1;
    }else if(s[1] == '1'){
        FOR(i,0,sz(s)){
            if(i % 4 == 0 or (i-1) % 4 == 0){
                if(s[i] != '1' and s[i] != '?') return 0;
            }else{
                if(s[i] != '0' and s[i] != '?') return 0;
            }
        }
        return 1;
    }
}
ll Problem1(string s,ll F){
        if(s[1] == '?'){
            string x = s;
            x[1] = '0';
            ll a = checkFirst(x);
            x[1] = '1';
            ll a2 = checkFirst(x);
            F = a + a2;
        }else F = checkFirst(s);

        return F;
}

ll Problem2(string s,ll S){
            if(s[1] == '?'){
            string x = s;
            x[1] = '0';
            ll a = checkSecond(x);
            x[1] = '1';
            ll b = checkSecond(x);
            S = a+b;
        }else S = checkSecond(s);

        return S;
}
void Solve(){
    ll n; cin >> n; ll F = 0, S = 0;
    string s; cin >> s;
    if(s[0] == '0'){
        ll W = Problem1(s,F);
        cout << W % 998244353 << endl;
    }else if(s[0] == '1'){
        ll Y = Problem2(s,S);
        cout << Y % 998244353 << endl;
    }else{
        string x = s;
        x[0] = '0';
        ll J = Problem1(x,F);
        x[0] = '1';
        ll K = Problem2(x,S);
        cout << (J+K) % 998244353 << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}