#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x,y;
    cin >> x >> y;

    if(x%2 == 1 && y%2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
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