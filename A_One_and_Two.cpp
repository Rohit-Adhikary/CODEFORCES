#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> n(t);
    vector<vector<int>> num(t);
    vector<int> v;
    for(int i = 0; i<t; i++){
        cin >> n[i];
        num[i].resize(n[i]);
        for(int j = 0; j<n[i]; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i<t; i++){
        int c = 0;
        for(int j = 0; j<n[i]; j++){
            if(num[i][j] == 2) c++;
        }
        if(c % 2 == 0){
            int temp = 0;
            for(int j = 0; j<n[i]; j++){
                if(num[i][j] == 2) temp++;

                if(temp == c/2){
                    cout << j+1 << endl;
                    break;
                }
            }
        }else cout <<"-1" << endl;
    }
}