#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;

    long long total_cost = 1LL * k * w * (w + 1) / 2;

    if (total_cost <= n)
        cout << 0;
    else
        cout << total_cost - n;

    return 0;
}
