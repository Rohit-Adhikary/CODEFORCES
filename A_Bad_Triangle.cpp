#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = false;
        vector<long long> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];
        long int max = v[n-1];
        for(int i = 1; i<n-1; i++){
            if(v[i-1]+ v[i] <= v[n-1]){
                cout << i <<" " << i+1 <<" " << n << endl;
                flag = true;
                break;
            }
        }
        if(flag == false) cout <<"-1" << endl;
    }
}