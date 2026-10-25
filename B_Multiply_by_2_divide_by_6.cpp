#include<bits/stdc++.h>
using ll = long long;
using namespace std;
long long div6(ll n){
    if(n % 6 == 0){
        n = n/6;
        return n;
    }else return -1;
}
long long div3(ll n){
    if(n % 3 == 0){
        n = n*2;
        return n;
    }else return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, c = 0;
        bool flag = false;
        cin >> n;
        if(n == 1) cout <<"0" << endl;
        else if(n % 3 != 0 && n % 6 != 0) cout <<"-1"<< endl; 
        else{
            while(true){
                if(n == 1) break;
                else if(div6(n) != -1){
                    n = div6(n);
                    c++;
                }else{
                    if(div3(n) != -1){
                        n = div3(n);
                        c++;
                    }else{
                        cout <<"-1" << endl;
                        flag = true;
                        break;
                    }
                }
            }
            if(!flag) cout << c << endl;
        }
    }
}