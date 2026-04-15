#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<ll>a(n);
    ll pos = 0, neg  = 0;

    for(int i =0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) pos++;
        else neg++;
    }
    ll ans = 0;
    while(pos < neg || neg%2 == 1){
        ans++;
        pos++;
        neg--;

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