#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long c = 0, i = 0, day = 1;
    while(true){
        i++;
        n--;
        c++;
        if(i == day*m ){
            n = n + 1;
            day++;
        }else if(n == 0){
            cout << c << endl;
            break;
        }
    }
}