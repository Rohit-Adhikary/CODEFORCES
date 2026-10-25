#include<bits/stdc++.h>
using namespace std;
int Games(vector<pair<int,int>> v, int x){

    vector<int> home,guest;

    for(int i = 0; i<v.size(); i++){
        home.push_back(v[i].first);
        guest.push_back(v[i].second);
    }
    int h = count(home.begin(),home.end(),x);
    int g = count(guest.begin(),guest.end(),x);

    if(h == 0 || g == 0) return 0;
    else return h*g;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> u;
    for(int i =0; i<n; i++){
        cin >> v[i].first;
        u.push_back(v[i].first);
        cin >> v[i].second;
    }
    sort(u.begin(),u.end());
    u.erase(unique(u.begin(),u.end()), u.end());

    int h = 0;
    for(int i = 0; i<u.size();i++){
        h = h + Games(v,u[i]);
    }
    cout << h << endl;
}