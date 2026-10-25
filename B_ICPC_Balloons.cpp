#include<bits/stdc++.h>
using namespace std;
int Loon(string s){
    vector<int> v;
    for(char i = 'A'; i <= 'Z'; i++){
        int c = count(s.begin(), s.end(), i);
        if(c != 0) v.push_back(c);
    }
    int a = v.size();
    int b = s.size();
    return 2*a+ (b-a);
}
int main(){
    int t;
    cin >> t;
    vector<int> n(t);
    vector<string> s(t);
    for(int i = 0; i<t; i++){
        cin >> n[i];
        cin >> s[i];
    }
    for(int i = 0; i<t; i++){
        cout << Loon(s[i]) << endl;
    }
}
