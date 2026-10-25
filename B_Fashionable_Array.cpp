#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> freq(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<int> ans;
    int mx = 0;
    for (int x = 1; x <= 100; x++)
    {
        mx = max(mx, freq[x]);
    }
    for (int cnt = 1; cnt <= mx; cnt++)
    {
        for (int x = 100; x >= 1; x--)
        {
            if (freq[x] >= cnt)
            {
                ans.push_back(x);
            }
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}