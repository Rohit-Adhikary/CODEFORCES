#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string v = "HQ9";
    bool flag = false;
    for(int i = 0; i<v.size(); i++){
        if(s.find(v[i]) != -1){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout <<"NO" << endl;
}