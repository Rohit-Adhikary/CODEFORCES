#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, sumDigit = 0;
    cin >> t;
    string n;
    string lock;
    cin >> n;
    cin >> lock;
    for(int i = 0; i<t; i++){
        int N = n[i] - '0';
        int Lock = lock[i] - '0';
        if(N >= Lock){
            int d1 = N - Lock;
            int d2 = Lock + 10 - N;
            if(d1 < d2) sumDigit = sumDigit + d1;
            else sumDigit = sumDigit + d2;
        }else{
            int d1 = Lock - N;
            int d2 = N + 10 - Lock;
            if(d2 < d1) sumDigit = sumDigit + d2;
            else sumDigit = sumDigit + d1;
        }
    }
    cout << sumDigit << endl;
}