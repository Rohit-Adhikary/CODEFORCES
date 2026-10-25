#include<bits/stdc++.h>
using namespace std;
bool Check(vector<int> c, vector<int> v){
    for(int i =0 ; i<c.size(); i++){
        if(c[i] != v[i]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i  = 0; i<n; i++) cin >> v[i];
        vector<int> copy = v;
        sort(copy.begin(),copy.end());

        if(k>1) cout <<"YES" << endl;
        else if(Check(copy,v)) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
}