#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long long rFood(ll a,ll x,ll c ){
    if(a+c < x) return -1;
    else{
        if(a>=x) return c;
        else return c-(x-a);
    }
}
string Food(ll a,ll b,ll c,ll x,ll y){
    ll dogFood = a;
    ll catFood = b;
    ll bothFood = c;
    ll dog = x;
    ll cat = y;

    ll rCat = rFood(a,x,c);
    if(rCat == -1) return "NO";
    else if(rCat + catFood >= y) return "YES";
    else return "NO";
}
int main(){
    int t;
    cin >> t;
    vector<ll> a(t);
    vector<ll> b(t);
    vector<ll> c(t);
    vector<ll> x(t);
    vector<ll> y(t);
    for(int i = 0; i<t; i++){
        cin >> a[i] >> b[i] >> c[i] >> x[i] >> y[i];
    }
    for(int i = 0; i<t; i++){
        cout << Food(a[i],b[i],c[i],x[i],y[i]) << endl;
    }
}