#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int l = s.size();
    int a = count(s.begin(),s.end(),'a');
    if(l-a >= a) cout << 2*a -1 << endl;
    else cout << l << endl;
}