#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int> v, int n){
    int c = 0,sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + v[i];
    }
    cout << sum - (n -1) <<'\n';

}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];
        Solve(v,n);

    }
}