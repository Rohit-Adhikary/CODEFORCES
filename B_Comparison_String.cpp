#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> n(t);
    vector<string> s(t);
    vector<int> v;
    for(int i = 0; i<t; i++){
        cin >> n[i];
        cin >> s[i];
    }
    for(int i = 0; i<t; i++){
        int l = 0;
        int r = 0;
        int lFinal = 0;
        int rFinal = 0;
        for(int j = 0; j<n[i]; j++){
            if(s[i][j] == '>'){
                r++;
                v.push_back(r);
            }else r = 0;
            if(s[i][j] == '<'){
                l++;
                v.push_back(l);
            }else l = 0;
        }
        cout << *(max_element(v.begin(),v.end())) +1 << endl;
        v.clear();
    }
}