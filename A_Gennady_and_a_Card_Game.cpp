#include<bits/stdc++.h>
using namespace std;
int main(){
    string table;
    cin >> table;
    vector<string> v(5);
    for(int i = 0; i<5; i++) cin >> v[i];
    bool flag = false;
    for(int i = 0;i<5; i++){
        int a = count(v[i].begin(), v[i].end(),table[0]);
        int b = count(v[i].begin(), v[i].end(),table[1]);
        if(a == 1 || b == 1){
            flag  = true;
            break;
        }
    }
    if(flag == true) cout <<"YES" << endl;
    else cout <<"NO" << endl;
}