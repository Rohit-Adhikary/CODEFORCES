#include<bits/stdc++.h>
using namespace std;
bool digitSum(int x){
    string s = to_string(x);
    int sum = 0;
    for(int i = 0; i<s.size(); i++){
        sum = sum + (s[i] - '0');
    }
    if(sum % 4 == 0) return true;
    else return false;
}
int main(){
    int a, n;
    cin >> a;
    bool stop = false;
    for(int i = a; stop == false; i++){
        if(digitSum(i) == true){
            n = i;
            stop = true;
        }
    }
    cout << n << endl;
}