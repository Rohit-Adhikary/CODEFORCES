#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,w;
    cin >> y >> w;

    int p = max(y,w) - 1;
    p = 6 - p;
    int g = gcd(p,6);
    p = p/g;
    cout << p <<"/"<< (6/g) << endl;
}