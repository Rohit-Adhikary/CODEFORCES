#include<bits/stdc++.h>
using namespace std;

vector<bool> seive(long long n){
    vector<bool> prime(n+1,true);
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i*i<=n; i++){
        if(prime[i] == true){
            for(int j = i*i; j<=n; j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main(){
    long long t;
    cin >> t;
    long long n = 1000000;
    vector<bool> prime = seive(n);
    while(t--){

        long long x;
        cin >> x;
        long long root = (long long)sqrt(x);
        if(root*root == x && prime[root] == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}