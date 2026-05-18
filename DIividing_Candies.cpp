#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % x == 0)
        {
            cout << a[i] << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}