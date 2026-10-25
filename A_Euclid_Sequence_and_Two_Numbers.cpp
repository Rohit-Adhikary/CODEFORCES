#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long x = v[n-1];
        long long y = v[n-2];

        vector<long long> seq;
        seq.push_back(x);
        seq.push_back(y);
        bool valid = true;
        while((int)seq.size() < n){
            if(seq.back() == 0){
                valid = false;
                break;
            }
            long long nSeq = seq[seq.size() - 2] % seq.back();
            if(nSeq == 0){
                valid = false;
                break;
            }
            seq.push_back(nSeq);
        }

        multiset<long long> s1(v.begin(),v.end());
        multiset<long long> s2(seq.begin(),seq.end());

        if(s1 == s2){
            cout << x <<" " <<y << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}