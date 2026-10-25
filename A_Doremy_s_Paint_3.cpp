#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
    int n; cin >> n; vector<ll> v(n);
    set<int> s;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    if(v.size() == 2){
        cout << "YES" << endl;
        return;
    }
    int sz = (int)s.size();
    if(sz > 2) cout << "NO" << endl;
    else{
        vector<int> m(s.begin(),s.end());
        if((int)m.size() == 1) cout <<"YES" << endl;
        else{
            if(n % 2 == 0){
                int a = count(v.begin(),v.end(),m[0]);
                int b = count(v.begin(),v.end(), m[1]);
                if(a == b) cout <<"YES" << endl;
                else cout <<"NO"<< endl;
            }else{
                int x = count(v.begin(),v.end(),m[0]);
                int y = count(v.begin(),v.end(),m[1]);
                int MAX = max(x,y);
                int MIN = min(x,y);
                if( MAX == MIN + 1) cout <<"YES" << endl;
                else cout <<"NO"<< endl;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) Solve();
}