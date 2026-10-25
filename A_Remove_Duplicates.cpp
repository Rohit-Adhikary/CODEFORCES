#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Duplicate(int x , vector<int> y){
    for(int i = 0; i<y.size(); i++){
        if(x == y[i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> y;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    reverse(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        if(Duplicate(v[i], y) == 1){
            y.push_back(v[i]);
        }
    }
    reverse(y.begin(),y.end());
    cout << y.size() << endl;
    for(int i = 0; i<y.size(); i++){
        cout << y[i] <<" ";
    }
}