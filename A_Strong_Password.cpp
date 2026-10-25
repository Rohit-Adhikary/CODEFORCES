#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool b = 0;
        int l = s.size();
        for(int i = 1; i<s.size(); i++){
            cout << s[i-1];
            if(s[i-1] == s[i] && b == 0){
                if(s[i-1] == 'a'|| s[i-1] == 'z') cout << "b";
                else cout << "a";
                b = true;
            }
        }
        if(b == 0){
            if(s[l] == 'z') cout << "a" ;
            else cout <<"z";
        }
        cout << s[l];
        cout << endl;
    }
}