#include<bits/stdc++.h>
using namespace std;
string Palindrome(string s){
    vector<int> v;
    for(char i = 'a'; i<= 'z'; i++){
        int c = count(s.begin(),s.end(), i);
        if(c != 0) v.push_back(c);
    }
    if(v.size() == 1) return "NO";
        else if(v.size() == 2){
            if(v[0] == 1 || v[1] == 1) return "NO";
            else return "YES";
        }else return "YES";
}
int main(){
    int t;
    cin >> t;
    vector<string> v(t);
    for(int i = 0; i<t; i++){
        cin >> v[i];
    }
    for(int i = 0; i<t; i++){
        cout << Palindrome(v[i]) << endl;
    }
}