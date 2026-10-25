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
ll zerozero(string s, ll n){
    ll pos_0 = -1, pos_00 = -1; bool b = false; ll move = -1;
    RFOR(i,0,n){
        if(s[i] == '0' and !b){
            pos_0 = i;
            b = true;
        }else if(s[i] == '0' and b){
            pos_00 = i;
            break;
        }
    }
    if(pos_0 != -1 and pos_00 != -1) move = (pos_0 - pos_00 - 1) + (n - pos_0 - 1);
    return move;
}
ll twofive(string s, ll n){
    ll pos_2 = -1, pos_5 = -1, move = -1; bool b = false;
    RFOR(i,0,n){
        if(s[i] == '5'){
            pos_5 = i;
            b = true;
        }else if(s[i] == '2' and b){
            pos_2 = i;
            break;
        }
    }
    if(pos_2 != -1 and pos_5 != -1) move = (pos_5 - pos_2 - 1) + (n - pos_5 - 1);
    return move;
}
ll sevenfive(string s, ll n){
    ll pos_7 = -1, pos_5 = -1, move = -1; bool b = false;
    RFOR(i,0,n){
        if(s[i] == '5'){
            pos_5 = i;
            b = true;
        }else if(s[i] == '7' and b){
            pos_7 = i;
            break;
        }
    }
    if(pos_7 != -1 and pos_5 != -1) move = (pos_5 - pos_7 - 1) + (n - pos_5 - 1);
    return move;
}
ll fivezero(string s, ll n){
    ll pos_5 = -1, pos_0 = -1, move = -1; bool b = false;
    RFOR(i,0,n){
        if(s[i] == '0'){
            pos_0 = i;
            b = true;
        }else if(s[i] == '5' and b){
            pos_5 = i;
            break;
        }
    }
    if(pos_0 != -1 and pos_5 != -1) move = (pos_0 - pos_5 - 1) + (n - pos_0 - 1);
    return move;
}

ll Pos(ll x){
    if(x == -1) return LLONG_MAX;
    else return x;
}
void Solve(){
    ll num; cin >> num; 
    string s = to_string(num);
    ll n = sz(s);
    ll move_1 = zerozero(s,n);
    ll move_2 = twofive(s,n);
    ll move_3 = sevenfive(s,n);
    ll move_4 = fivezero(s,n);
    move_1 = Pos(move_1);
    move_2 = Pos(move_2);
    move_3 = Pos(move_3);
    move_4 = Pos(move_4);

    cout << min(move_1, min(move_2, min(move_3, move_4))) << endl;

}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}