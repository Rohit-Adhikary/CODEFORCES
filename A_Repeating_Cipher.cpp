#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 1; i<= 50;i++){
        v.push_back(((i-1)*i)/2);
    }
    int l = s.size();
    int j = 0;
    for(int i = 0; i<l; i++){
        if(v[j] == i){
            cout << s[i];
            j++;
        }
    }
}