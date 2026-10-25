#include<bits/stdc++.h>
using namespace std;
void printNum(int n){
    int d = n / 2;
    for(int i = 0; i<d; i++){
        cout <<"2 ";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;
        if(k == 1 && x == 1) cout <<"NO" << endl;
        else{
            if(x == 1){
                if(n % 2 == 0){
                    cout <<"YES"<< endl;
                    cout << n/2 << endl;
                    printNum(n);
                    cout << endl;
                }else{
                    if(k >= 3){
                        cout <<"YES" << endl;
                        cout << 1 + (n-3)/2<< endl;
                        cout <<"3 ";
                        printNum(n-3);
                        cout << endl;
                    }else cout <<"NO" << endl;
                }
            }else{
                cout <<"YES" << endl;
                cout << n << endl;
                for(int i = 0; i<n; i++){
                    cout <<"1 ";
                }
                cout << endl;
            }
        }
    }
}