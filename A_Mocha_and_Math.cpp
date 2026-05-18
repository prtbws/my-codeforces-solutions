#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    ll ans = -1;

    for(int i=0; i<n; i++){
       cin >> a[i];
       if(i==0) ans = a[i];
       else ans &= a[i];
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