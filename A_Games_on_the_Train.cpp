#include<bits/stdc++.h>
#define loop(i,n) for(int i = 0; i<n; i++)
using namespace std;
using vi = std::vector<int> ;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi v(n);
        loop(i,n) cin >> v[i];
        sort(v.begin(), v.end());
        int MIN = v.front();
        int MAX = v.back() + 1;
        cout << MAX - MIN << endl;
        
    }
}