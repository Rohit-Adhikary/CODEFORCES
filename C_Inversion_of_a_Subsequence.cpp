#include<bits/stdc++.h>
using namespace std;
bool Equal(vector<int> a, vector<int> b, int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i<n; i++)cin >> a[i];
        for(int i = 0; i<n; i++)cin >> b[i];
        bool flag = true;
        for(int i = 0 ; i<n; i++){
            if(a[i] == b[i]){
                flag = false;
                break;
            }
        }
        if(!flag){
            if(Equal(a,b,n)) cout <<"0" << endl;
            else cout << "-1" << endl;
        }else{
            int num = count(a.begin(),a.end(), 1);
            if(num % 2 == 0) cout << 2 << endl;
            else cout << 1 << endl;
            
        }
    }
}