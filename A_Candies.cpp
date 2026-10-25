#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(int i = 2; i<=60; i++){
            ll p = (1LL << i) - 1;
            if(n % p == 0){
                cout << n / p << endl;
                break;
            }
        }
    }
}