#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k , x;
    cin >> n >> k >> x;

    ll min_sum = k*(k+1)/2;
    ll max_sum = k*n - k*(k-1)/2;

    if(x >= min_sum && x <= max_sum) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}