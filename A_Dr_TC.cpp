#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = count(s.begin(),s.end(),'0');
        int b = count(s.begin(),s.end(),'1');
        
        int p = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0') p = p + (b+1);
            else p = p + (b-1);
        }
        cout << p<<endl;
        
    }
}