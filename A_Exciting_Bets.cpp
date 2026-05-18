#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;

    cin >> a >> b;
    if (b > a) swap(a, b);

    if(a == b) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    else{

        ll g = (a-b);
        ll x = b%g;

        x = min(x, g-x);

        cout << g << " " << x << endl;
    }
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