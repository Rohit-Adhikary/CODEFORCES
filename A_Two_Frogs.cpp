#include<bits/stdc++.h>
using namespace std;
string game(int n, int a, int b){
    int d = abs(a-b)-1;
    if(d >= 1){
        if(d % 2 == 0) return "NO";
        else return "YES";
    }else return "NO";
}
int main(){
    int t;
    cin >> t;
    vector<int> n(t);
    vector<int> a(t);
    vector<int> b(t);
    for(int i = 0; i<t; i++){
        cin >> n[i] >> a[i] >> b[i];
    }
    for(int i = 0; i<t; i++){
        cout << game(n[i],a[i],b[i]) << endl;
    }
}