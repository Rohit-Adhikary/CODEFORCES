#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<long long> v(k);
        for(int i = 0; i<k ;i++) cin >> v[i];
        bool flag = false;
        int c = 0;
        for(int i = 0; i<k; i++){
            if(v[i] >= 3) flag = true;
            if(v[i] >= 2) c++;
        }
        if(flag | c >=2) cout << "YES"<< endl;
        else cout <<"NO" << endl;
    }
}