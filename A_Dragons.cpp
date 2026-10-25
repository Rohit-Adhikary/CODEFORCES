#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0;i<n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    bool flag = true;
    for(int i = 0; i<n; i++){
        int dragonLife = v[i].first;
        int addLife = v[i].second;

        if(s>dragonLife) s+=addLife;
        else{
            flag = false;
            cout << "NO" << endl;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
}