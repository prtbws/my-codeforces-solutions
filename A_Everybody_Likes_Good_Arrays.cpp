#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;

    

    vector<ll>a(n);
    ll ans = 0;

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1 ; i++){
        if(a[i]%2 == a[i+1]%2) ans++;
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