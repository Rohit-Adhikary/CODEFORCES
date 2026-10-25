#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        if(a1 != 0 && a2 != 0 && b1 != 0 && b2 != 0) cout <<"2" << endl;
        else if(a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0) cout <<"0" << endl;
        else cout << "1" << endl;
    }
}