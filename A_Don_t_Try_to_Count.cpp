#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(){
    int n,m; cin >> n >> m;
    string x,s; cin >> x >> s;
    ll c = 0; bool flag = false;
    for(int i = 0; i<=6; i++){
        if(x.find(s) != string::npos){
            cout << c << endl;
            return;
        }else{
            c++;
            x = x + x;
        }
    }
    cout << "-1" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}