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
    int t; cin >> t;
    multimap<string,int> m;
    for(int i = 0; i<t; i++){
        string x ; cin >> x;
        m.insert({x,i});
    }
    vector<pair<string,int>> v;
    vector<pair<int,string>> p(t);
    for(auto &i : m){
        v.push_back(i);
    }
    int n = sz(v); int c = 0;
    for(int i = 1; i<n; i++){
        if(v[i-1].first == v[i].first){
            c++;
            p[i].second = v[i].first + to_string(c);
            p[i].first = v[i].second;
        }else{
            c = 0;
            p[i] = {v[i].second,"OK"};
        }
    }
    p[0] = {v[0].second,"OK"};
    sort(all(p));
    for(int i = 0; i<t; i++){
        cout << p[i].second << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    Solve();
    
    return 0;
}