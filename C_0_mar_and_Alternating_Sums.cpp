#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> v;
        for(int i = 0 ; i<n; i++){
            cin >> a[i];
            if(i % 2 == 0) v.push_back((-1)*a[i]);
            else v.push_back(a[i]);
        }
        for(int i = 0; i<n; i++) cout << v[i] << endl;
    }
}