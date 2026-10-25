#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define loop(i,n) for(int i =0; i<n; i++)
#define all(x) x.begin(),x.end()

void Solve(){
    string s; cin >> s;
    int c = 0;
    loop(i,s.size()-1){
        if(s[i] == s[i+1]) c++;
    }
    if((c+1)/2 <= 1) cout <<"YES\n";
    else cout <<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) Solve();
    
    return 0;
}