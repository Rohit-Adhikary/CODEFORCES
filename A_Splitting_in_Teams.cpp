#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    int a = count(v.begin(), v.end(), 1);
    int b = count(v.begin(), v.end(), 2);
    if( a == 0) cout << "0" ;
    else{
        if(b == 0) cout << (int)(a / 3) ;
        else{
            if(a > b) cout << b +(int)((a - b) / 3) ;
            else cout << a ;
        }
    }
}