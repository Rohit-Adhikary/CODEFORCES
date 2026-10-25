#include<bits/stdc++.h>
using namespace std;
int Puzzle(vector<int> a, vector<int> b , int n){
    int c = 0;
    for(int i = 0; i<n; i++){
        if(a[i] >= b[i]){
            c = c + a[i] - b[i];
        }else return -1;
    }
    return c;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i<n; i++)cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        int p = Puzzle(a,b,n);

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int pp = Puzzle(a,b,n);

        if(p == -1){
            if(pp == -1) cout << "-1" << endl;
            else cout << pp+c << endl;
        }else cout << min(p,pp+c) << endl;
    }
}