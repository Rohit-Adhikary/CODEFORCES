#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 0, maxCapacity = 0;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        c = c - a;
        c = c + b;
        maxCapacity = max(maxCapacity, c);
    }
    cout << maxCapacity << endl;
}