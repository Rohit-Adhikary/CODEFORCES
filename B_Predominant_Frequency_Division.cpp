#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1) , p1(n+1), p2(n+2), p3(n+1);
        for(int i = 1; i<=n ; i++) cin >> a[i];

        for(int i = 1; i<= n ;i++){
            p1[i] = p1[i-1] + (a[i] == 1);
            p2[i] = p2[i-1] + (a[i] == 2);
            p3[i] = p3[i-1] + (a[i] == 3);
        }

        bool flag = false;
        for(int i = 1; i<= n-2; i++){
            int one = p1[i];
            int two = p2[i];
            int three = p3[i];
            if(one < two + three) continue;

            for(int j = i+1; j<= n -1; j++){
                int one1 = p1[j] - p1[i];
                int two2 = p2[j] - p2[i];
                int three3 = p3[j] - p3[i];
                if(one1 + two2 < three3) continue;

                flag = true;
            }
            if(flag) break;
        }

        cout << ( flag ? "YES\n" : "NO\n");
    }
}