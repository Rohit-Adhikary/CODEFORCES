#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = to_string(n);
        if(n % 7 == 0) cout << n << endl;
        else{
            if(s.size() == 1) cout <<"7" << endl;
            else if(s.size() == 2){
                int temp = 0;
                int num = 0;
                for(int i = 14; i<= 99; i+=7){
                    int c = 0;
                    string x = to_string(i);
                    for(int j = 0; j<s.size(); j++){
                        if(s[j] == x[j]) c++;
                    }
                    if(c >temp){
                        num = i;
                        temp = c;
                    }
                }
                cout << num << endl;
            }else{
                int temp = 0;
                int num = 0;
                for(int i = 105; i<999; i+=7){
                    int c = 0;
                    string x = to_string(i);
                    for(int j = 0; j<s.size(); j++){
                        if(s[j] == x[j]) c++;
                    }
                    if(c > temp){
                        num = i;
                        temp = c;
                    }
                }
                cout << num << endl;
            }
        }
    }
}