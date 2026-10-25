#include<bits/stdc++.h>
using namespace std;
int checkQ(string s,int index){
    int c = 0;
    for(int i = index; i<s.size(); i++){
        if(s[i] == 'Q') c++;
    }
    return c;
}
int checkA(string s, int index){
    int c = 0;
    for(int i = index; i<s.size(); i++){
        if(s[i] == 'A'){
            c = c + checkQ(s,i);
        }
    }
    return c;
}
int main(){
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'Q'){
            c = c + checkA(s,i);
        }
    }
    cout << c << endl;
}