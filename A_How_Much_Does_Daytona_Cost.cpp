#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
bool Cost(vi v, vi kInv,int k){
    if(kInv.size() == 0) return false;
    if(kInv.size() >= 1) return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        vector<int> kInv;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            if(v[i] == k) kInv.push_back(i);
        }
        if(Cost(v,kInv,k)) cout <<"YES" << endl;
        else cout <<"NO" <<endl;
    }
}