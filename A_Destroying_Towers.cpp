#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        vector<int> finalV(n);
        int mn = v[0];
        finalV[0] = v[0];

        for(int i = 1; i<n; i++){
            mn = min(mn,v[i]);
            finalV[i] = mn;
        }
        int sum = 0;
        for(int k: finalV) sum = sum + k;
        cout << sum << endl;
    }
}