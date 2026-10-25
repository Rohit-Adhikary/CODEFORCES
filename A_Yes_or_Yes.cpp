#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int y = count(s.begin(),s.end(),'Y');
        if(y>= 2) cout << "NO" << endl;
        else cout << "YES"<< endl;
    }
}