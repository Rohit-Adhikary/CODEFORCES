#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
bool Sorted(vl v, vl s){
    for(int i = 0; i<s.size(); i++){
        if(v[i] != s[i]) return false;
    }
    return true;
}
long int Dif(vl v){
    ll dif = LONG_MAX;
    for(int i = 1; i<v.size(); i++){
        if(abs(v[i] - v[i-1]) < dif) dif = abs(v[i] - v[i-1]);
    }
    return dif;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0;i<n; i++) cin >> v[i];
        vector<ll> s = v;
        sort(s.begin(),s.end());

        if(!Sorted(v,s)) cout <<"0" << endl;
        else{
            long long d = Dif(v);
            cout << d/2+1 << endl;
        }
    }
}