#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y,z;
        int withAi;
        cin >> n >> x >> y >> z;
        int withoutAi = (int)ceil((double)n / (x+y));
        if(x*z >= n){
            withAi = z;
        }else{
            withAi = z + (int) ceil((double)(n - x*z)/ (x+ 10*y));
        }
        cout << min(withoutAi,withAi) << endl;
    }
}