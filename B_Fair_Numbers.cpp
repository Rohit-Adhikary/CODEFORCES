#include <bits/stdc++.h>
using namespace std;
bool digit(long long x){
    string s = to_string(x);
    for(int i = 0; i<s.size(); i++){
        int num = s[i] - '0';
        if(num != 0 && x % num != 0) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,x;
        cin >> n;
        x = n;
        while(true){
            if(digit(x) == 1){
                cout << x << endl;
                break;
            }
            x++;
        }
    }
}