#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long int> v(n);
        long int sum = 0;
        for(int i = 0; i<n; i++){
            cin >> v[i];
            sum = sum + v[i];
        }
        long int div = sum / n;
        long int temp = 0;
        bool flag = true;
        for(int i = 0; i<n; i++){
            if(v[i] >= div){
                temp = temp + v[i] - div;
            }else{
                temp = temp - (div - v[i]);
                if(temp < 0){
                    cout <<"NO" << endl;
                    flag = false;
                    break;
                
                }
            }
        }
        if(flag == true) cout <<"YES" << endl;
    }
}