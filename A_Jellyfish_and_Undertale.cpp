#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a, b , n;
    cin >> a >> b >> n;

    vector<ll>x(n);

    for(int i=0; i<n; i++) cin >> x[i];

    ll ans = b;

    for(int i = 0; i<n; i++){
        ans += min(x[i], a-1);
    }
    cout << ans << endl;
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