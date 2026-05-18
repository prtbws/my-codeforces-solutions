#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;

    ll cnt3 = 0, cnt2 = 0;

    while(n>0 && n%3 == 0){
        cnt3++;
        n /= 3;
    }
    while(n>0 && n%2 == 0){
        cnt2++;
        n /= 2;
    }

    if(n > 1 || cnt2 > cnt3) cout << -1 << endl;
    else cout << cnt3 + cnt3 - cnt2 << endl;
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