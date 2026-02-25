#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long lastFlip = (m / k) * k;

        long long fallenBefore = min(s, lastFlip);
        long long remainingAfterFlip = s - fallenBefore;

        long long timeAfterFlip = m - lastFlip;

        long long ans = max(0LL, remainingAfterFlip - timeAfterFlip);
        cout << ans << endl;
    }

    return 0;
}
