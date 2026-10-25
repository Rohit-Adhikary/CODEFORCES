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
        vector<int> v;
        int c = 0;
        for(int i = 0 ; i<s.size(); i++){
            if(s[i] == '#'){
                c++;
            }else{
                v.push_back(c);
                c = 0;
            }
        }
        if(c!= 0) v.push_back(c);
        sort(v.begin(),v.end());
        int l = (int)v.size();
        l = l-1;
        cout << ceil((double)v[l]/2) << endl;
    }
}