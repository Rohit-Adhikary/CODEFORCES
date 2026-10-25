#include<iostream>
#include<vector>
#include<unordered_map>
#include<ctime>
#include<sys/resource.h>   // Linux specific

using namespace std;

int main(){
    auto begin = clock();
    vector<long long> v;
    unordered_map<int,int> m;
    m.rehash(100000);

    for(int i = 0; i<30; i++){
        int x = 0;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    
    for(int i = 0; i < 10000000; i++){
        int y = m[i];
        if (y == 0) continue;
        while(y--) cout << i <<" ";
    }
    cout <<'\n';
    auto end = clock();

    // Time in seconds
    cout << "Time: " << 1.0 * (end - begin)/ CLOCKS_PER_SEC << " sec" << endl;

    // Memory usage in MB
    rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    double memMB = usage.ru_maxrss / 1024.0; // ru_maxrss in KB
    cout << "Memory: " << memMB << " MB" << endl;
}
