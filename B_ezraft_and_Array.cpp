#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1) cout << n << endl;
        else if(n == 2) cout << "-1" <<" " << endl;
        else if(n == 3) cout << n-2 <<" "<< n-1 <<" " << n << endl;
        else{
            ll c = 3;
            cout << "1 2 3 ";
            for(int i = 0; i<n-3; i++){
                cout << 2*c <<" ";
                c = 2*c;
            }
            cout << endl;
        }
    }
}
