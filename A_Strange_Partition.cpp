#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,x;
    cin >> n >> x;

    vector<ll> a(n);

    ll sum1 = 0;
    ll sum2 = 0;
    for(int i=0; i<n; i++){
       cin >> a[i];
       sum1 += a[i];
       sum2 += (a[i]+x-1)/x ;
    }

    cout << (sum1+x-1)/x << " " << sum2 << endl;
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