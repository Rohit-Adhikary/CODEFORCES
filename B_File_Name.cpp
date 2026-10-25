#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    int c = 0;
    vector<int> v;
    for(int i = 0;i<s.size(); i++){
        if(s[i] == 'x'){
            c++;
        }else{
            if(c >= 3) v.push_back(c);
            c = 0;
        }
    }
    if(c>2) v.push_back(c);
    int ans = 0;
    for(int i = 0; i<v.size(); i++){
        ans = ans + v[i] - 2;
    }
    cout << ans << endl;

}