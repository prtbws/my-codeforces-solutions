#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<ll> a(n*k);

    for(int i=0; i<n*k; i++){
       cin >> a[i];
    }

    ll ptr = n*k;
    ll sum = 0;

    while(k--){

        ptr -= (n/2 + 1);
        sum += a[ptr];
    }
    cout << sum << endl;
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