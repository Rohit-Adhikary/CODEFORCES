#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> n(t);
    vector<vector<int>> v(t);
    vector<int> x;
    vector<int> y;
    for(int i = 0; i<t; i++){
        cin >> n[i];
        v[i].resize(n[i]);
        for(int j = 0; j<n[i]; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i<t; i++){
        for(int j = 0; j<n[i]; j++){
            if((j+1) % 2 != 0){
                x.push_back(v[i][j]);
            }else y.push_back(v[i][j]);
        }
        bool X = true;
        bool Y = true;
        if(x[0] % 2 == 0){
            for(int i = 0; i<x.size(); i++){
                if(x[i] % 2 != 0){
                    X = false;
                }
            }
        }else{
            for(int i = 0; i<x.size(); i++){
                if(x[i] % 2 == 0){
                    X = false;
                }
            }
        }
        if(y[0] % 2 == 0){
            for(int i = 0; i<y.size(); i++){
                if(y[i] % 2 != 0){
                    Y = false;
                }
            }
        }else{
            for(int i = 0; i<y.size(); i++){
                if(y[i] % 2 == 0){
                    Y = false;
                }
            }
        }
        if( X == true && Y == true) cout <<"YES" << endl;
        else cout <<"NO" <<endl;
        x.clear();
        y.clear();
    }
}