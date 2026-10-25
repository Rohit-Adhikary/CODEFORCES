#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0 ;i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        if(n % 2 != 0){
            int c = 0, mid = ceil((double)(n/2));
            for(int i = 0; i<mid;i++){
                if(v[i] == v[n-1-i] && v[i] != v[mid])c++;
                else if(v[i] != v[n-1-i]) c++;
            }
            cout << c << endl;
        }else{
            int c = 0; int mid = n/2;
            for(int i = 0; i< mid; i++){
                if(v[i] == v[n-1-i] && v[i] != v[mid] && v[i] != v[mid-1]) c++;
                else if(v[i] != v[n-1-i]) c++;
            }
            cout << c << endl;
        }
    }
}