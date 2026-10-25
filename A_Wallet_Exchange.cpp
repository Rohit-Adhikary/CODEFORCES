#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long w1, w2;
        cin >> w1 >> w2;
        long long w = w1 + w2;
        if(w % 2 == 0) cout <<"Bob" << endl;
        else cout << "Alice" << endl;
    }
}