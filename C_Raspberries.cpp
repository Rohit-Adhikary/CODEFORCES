#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int,int>> n(t);
    vector<vector<int>> v(t);
    for(int i = 0; i<t; i++){
        cin >> n[i].first >> n[i].second;
        v[i].resize(n[i].first);
        for(int j = 0; j<n[i].first; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i<t; i++){
        int s = n[i].first;
        int k = n[i].second;
        bool flag = false;
        int d = INT_MAX;
        int d4 = d;
        int c = 0;
        for(int j = 0; j<s; j++){
            if(k == 2){
                if(v[i][j] % 2 == 0){
                    flag = true;
                    break;
                }else d = 1;
            }else if(k == 3){
                if(v[i][j] % 3 == 0){
                    flag = true;
                }else{
                    int div = v[i][j] / 3 + 1;
                    int temp = div * 3 - v[i][j];
                    if(temp < d) d = temp;
                }
            }else if(k == 4){
                if(v[i][j] % 4 == 0){
                    flag  = true;
                    break;
                }else{
                    int div = v[i][j] / 4 + 1;
                    int temp = div * 4 - v[i][j];
                    if(temp < d4) d4 = temp;
                }
                if(v[i][j] % 2 == 0){
                    c++;
                }
                if(c >= 2){
                    flag = true;
                    break;
                }else if(c == 1){
                    d = 1;
                }else{
                    d = 2;
                }
                if(d4 <d) d = d4;
            }else{
                if(v[i][j] % 5 == 0){
                    flag = true;
                }else{
                    int div = v[i][j] / 5 +1;
                    int temp = div * 5 - v[i][j];
                    if(temp < d) d = temp;
                }
            }
        }
        if(flag == true){
            cout << "0" << endl;
        }else{
            cout << d << endl;
        }
    }
}