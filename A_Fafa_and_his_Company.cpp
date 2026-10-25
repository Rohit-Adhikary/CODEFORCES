#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 1;
    for(int i = 2; i<=n/2; i++){
        if((n-i) % i == 0 ){
            c++;
        }
    }
    cout << c << endl;
}