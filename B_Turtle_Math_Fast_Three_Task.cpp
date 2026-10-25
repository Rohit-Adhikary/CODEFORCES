#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], sum = 0;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }
        if(sum % 3 == 0) cout << "0" << endl;
        else if((sum + 1) % 3 == 0) cout << "1" << endl;
        else{
            bool flag = false;
            for(int i = 0; i<n; i++){
                if((sum - arr[i]) % 3 == 0){
                    cout << "1" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag == 0) cout << "2" << endl;
        }
    }
}