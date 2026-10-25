#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    vector<ll> a(t);
    vector<ll> b(t);
    vector<ll> c(t);
    vector<ll> d(t);
    ll x , y, z;
    for(int i = 0; i<t ; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for(int i = 0; i<t; i++){
        x = b[i];
        y = b[i];
        z = c[i];
        if(x+y>z && x+z>y && y+z>x){
            cout <<x <<" "<< y <<" "<< z << endl;
        }else{
            x = b[i];
            y = c[i];
            z = c[i];
            if(x+y>z && x+z>y && y+z>x){
                cout <<x <<" "<< y <<" "<< z << endl;
            }else{
                x = a[i];
                y = b[i];
                z = c[i];
                if(x+y>z && x+z>y && y+z>x){
                    cout <<x <<" "<< y <<" "<< z << endl;
                }
            }
        }
    }
}