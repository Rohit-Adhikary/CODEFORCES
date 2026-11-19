#include<bits/stdc++.h>
using namespace std;
int main(){
    string res;
    string x = "Is it rated?";
    while(true){
        getline(cin ,res);
        if(res != x) break;
        cout << "NO" << endl;
    }
}