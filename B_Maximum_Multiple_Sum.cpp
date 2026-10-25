#include<bits/stdc++.h>
using namespace std;
int Sum(int k){
    int sum;
    sum = (k*(k+1)) / 2;
    return sum;
}
int main(){
    int t;
    cin >> t;
    vector<int> s;
    int totalSum = 0,max;
    while(t--){
        int n;
        cin >> n;
        for(int x = 2; x<=n; x++){
            int k = n / x;
            int sum = x*Sum(k);
            if(totalSum <= sum){
                totalSum = sum;
                max = x;
            }
        }
        cout << max << endl;
    }
}