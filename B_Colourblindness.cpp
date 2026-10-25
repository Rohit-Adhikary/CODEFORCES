#include<bits/stdc++.h>
using namespace std;
bool Color(string s1, string s2){
    for(int i = 0;i <s1.size(); i++){
        if(s1[i] == 'R' && s2[i] != 'R') return false;
        else if(s1[i] != 'R' && s2[i] == 'R') return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        if(Color(s1,s2)) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
}  