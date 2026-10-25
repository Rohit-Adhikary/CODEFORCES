#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t  = 0;
    char c = 'a';
    for(char ch : s){
        int d = abs(ch - c);
        t += min(d, 26 - d);
        c = ch;
    }

    cout << t << endl;
}