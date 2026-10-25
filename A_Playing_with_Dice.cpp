#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int winA = 0, draw = 0, winB = 0;

    for (int x = 1; x <= 6; x++) {
        int da = abs(a - x);
        int db = abs(b - x);
        if (da < db) winA++;
        else if (da == db) draw++;
        else winB++;
    }

    cout << winA << " " << draw << " " << winB << endl;
    return 0;
}

