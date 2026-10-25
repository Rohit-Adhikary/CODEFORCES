#include<bits/stdc++.h>
using namespace std;
using vs = vector<string>;
int Word( vs m, vs m2, vs m3, int n){
    int c = 0;
    for(int i = 0; i<n; i++){
        bool f1 = binary_search(m2.begin(), m2.end(), m[i]);
        bool f2 = binary_search(m3.begin(), m3.end(), m[i]);
        if(f1 == 0 && f2 == 0) c = c + 3;
        else if(f1 == 0) c++;
        else if(f2 == 0) c++;
        else c = c;
    }
    return c;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> man1(n);
        vector<string> man2(n);
        vector<string> man3(n);
        for(int i = 0; i<n; i++){
            cin >> man1[i];
        }
        for(int i = 0; i<n; i++){
            cin >> man2[i];
        }
        for(int i = 0; i<n; i++){
            cin >> man3[i];
        }
        sort(man1.begin(),man1.end());
        sort(man2.begin(),man2.end());
        sort(man3.begin(),man3.end());
        cout << Word(man1,man2,man3,n)<<" ";
        cout << Word(man2,man1,man3,n)<<" ";
        cout << Word(man3,man2,man1,n)<<endl;
    }
}