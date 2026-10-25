#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,a,b;
        cin >> n >> a>> b;
        if(3*a <= b) cout << n*a << endl;
        else{
            long long teamCost = (long long)(ceil((double)(n/3.0)))*b ;
            long long extraStudent = n - (n/3)*3;
            long long singleCost = extraStudent*a;
            long long totalCost = (n/3)*b + singleCost;
            cout << min(totalCost,teamCost) << endl;
        } 
    }
}