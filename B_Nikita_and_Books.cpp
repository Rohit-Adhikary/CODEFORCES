#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];

        bool flag = true;
        long long extra = 0;

        for(int i = 0 ; i<n; i++){
            extra = extra + a[i];
            if(extra < i+1){
                flag  = false;
                break;
            }
            extra = extra - (i+1);
        }
        if(flag) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
}