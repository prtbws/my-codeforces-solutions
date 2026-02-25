#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    for (int j = 0; j < t; j++) {
        cin >> n >> x;

        int a[n];
        int mxd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        mxd = max(mxd, a[0]);

        for (int i = 1; i < n; i++) {
            mxd = max(mxd, a[i] - a[i - 1]);
        }

        mxd = max(mxd, 2 * (x - a[n - 1]));

        cout << mxd << endl;
    }

    return 0;
}
