#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.rbegin(), s.rend());
        cout << s[0] - '0' - 48 << endl;
    }
}