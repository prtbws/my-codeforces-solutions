#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int>a(n);

    for(int i =0 ; i<n; i++) cin >> a[i];

    int ans = 0;

    for(int i=0; i<n; i++){

        if((i & n-1-i) == 0) ans ^= a[i];
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