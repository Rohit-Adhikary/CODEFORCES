#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n % 3 == 0) cout << n/3 << endl;
        else{
            ll a = (ll)(n / 3);
            ll b = n - a * 3;
            if(b % 2 == 0){
                cout << a + (b / 2) << endl;
            }else{
                if( n == 1) cout <<"2" << endl;
                else cout << a + 1 + (b / 2) << endl;
            }
        }
    }
}