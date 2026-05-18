#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];

    }
    ll ans = 0;
    for(int i = 0; i<n; i++){

        if(a[i] != 0 && (i == 0 || a[i-1] == 0)) ans++;
    }
    if(ans == 0) cout << 0 << endl;
    else if(ans == 1) cout << 1 << endl;
    else cout << 2 << endl;
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