#include<bits/stdc++.h>
using namespace std;
void Construc(long long k , long long m){
    for(int i  = 0; i<k-1; i++){
        cout <<"1 ";
    }
    cout << m - (k-1) <<" ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,m;
        cin >> n >> k >> m;
        if(k > m) cout << "NO" << endl;
        else if(k == m){
            cout <<"YES" << endl;
            for(int i = 0; i<n; i++)cout <<"1 ";
            cout <<'\n';
        }else{
            int j = 0;
            cout <<"YES" << endl;
            for(int i = 0; i<n/k ; i++) Construc(k,m);
            long long d = n - (n/k)*k;
            if(d!=0){
                for(int i = 0; i<d; i++) cout <<"1 " ;
            }
            cout << '\n';
        }
    }
}