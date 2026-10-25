#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d = n/4;
        if(n % 2 != 0) cout <<"0"<< endl;
        else cout << d+1 << endl;
    }
}