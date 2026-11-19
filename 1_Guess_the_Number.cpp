#include<bits/stdc++.h>
using namespace std;

int main(){
    int low = 1;
    int high = 1000000;
    int ans = 1;

    while(low <= high){
        int mid = (low + high) /2;
        cout << mid << endl;

        string res;
        cin >> res;

        if( res == ">="){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    cout << "! " << ans << endl;
}