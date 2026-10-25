#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<long int> v(3);
        for(int i = 0; i<3; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        long int a = v[0];
        long int b = v[1];
        long int c = v[2];
        if(a == b && b == c){
            if(a % 2 == 0) cout <<"YES" << endl;
            else cout <<"NO" << endl;
        }
        else if(a == b){
            if(c % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(b == c){
            if( a % 2 == 0) cout <<"YES " << endl;
            else cout <<"NO" << endl;
        }else{
            if(a - b == c) cout << "YES" << endl;
            else if(a - c == b) cout << "YES" << endl;
            else cout <<"NO" << endl;
        }
    }
}