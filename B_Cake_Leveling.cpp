#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using vl = vector<ll>;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vl v(n);
        ll sum = 0, h = LONG_MAX, avg;
        for(int i = 0; i<n; i++) cin >> v[i];
        for(int i = 0; i<n; i++){
            sum = sum + v[i];
            avg = sum / (i+1);
            avg = min(avg,h);
            cout << avg << " ";
            h = avg;
        }
        cout << endl;
    }
}