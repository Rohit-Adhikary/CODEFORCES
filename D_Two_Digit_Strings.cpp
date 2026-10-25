#include<bits/stdc++.h>
using namespace std;
void Combination(string s, unordered_set<string> &r){
    if(r.count(s)) return;
    r.insert(s);
    if(s.size() == 1) return;
    for(int i = 0; i+1 < (int)s.size(); i++){
        int x = s[i] - '0';
        int y = s[i+1]- '0';
        int z = (x+y) % 10;
        string t = s;
        t[i] = char('0' + z);
        t.erase(i+1,1);
        Combination(t,r);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        unordered_set<string> sa, sb;
        Combination(a, sa);
        Combination(b, sb);

        if(sa.size() < sb.size()) swap(sa,sb);

        int ans = -1;
        for(auto &s: sa){
            if(sb.count(s)) ans = max(ans,(int)s.size());
        }
        cout << ans << endl;
    }
}