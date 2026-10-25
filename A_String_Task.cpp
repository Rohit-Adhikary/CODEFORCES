#include<bits/stdc++.h>

using namespace std;
string lowerCase(string s){
    string n;
    for(int i = 0; i< s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            char x = s[i] + 32;
            n.push_back(x);
        }else n.push_back(s[i]);
    }
    return n;
}
int main(){
    string s;
    cin >> s;
    s = lowerCase(s);
    for(int i =0 ; i< s.size(); i++){
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y'){

        }else{
            cout <<"."<<s[i];
        }
    }
}