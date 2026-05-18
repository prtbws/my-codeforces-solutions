#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll total = 0;
    for (int x : a) total += x;

    // suffix greedy (no removal)
    vector<ll> suf(n);
    int limit = 1e9;

    for (int i = n-1; i >= 0; i--) {
        int take = min(a[i], limit);
        suf[i] = take + (i+1<n ? suf[i+1] : 0);
        limit = take;
    }

    ll best_fixed = suf[0];

    // try removing one cube at each position efficiently
    for (int i = 0; i < n; i++) {

        if (a[i] == 0) continue;

        int limit = 1e9;
        ll fixed = 0;

        for (int j = n-1; j >= 0; j--) {
            int val = a[j];
            if (j == i) val--;  // remove here

            int take = min(val, limit);
            fixed += take;
            limit = take;
        }

        best_fixed = max(best_fixed, fixed);
    }

    cout << total - best_fixed << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}