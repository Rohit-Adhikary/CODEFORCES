#include<iostream>
using namespace std;
using ll = long long;
ll Day(ll n,ll a,ll b,ll c){
    ll div = n / (a+b+c);
    ll coun = div * 3;
    if(n % (a+b+c) == 0) return coun;
    else{
        if(div * (a+b+c) + a >= n) return coun+1;
        else if(div * (a+b+c) + a + b >= n) return coun+2;
        else return coun + 3;
    }
}
int main(){
    int t;
    cin >> t;
    ll n,a,b,c;
    while(t--){
        cin >>n >>a >> b>> c;
        cout << Day(n,a,b,c) << endl;
    }
}