#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    ll n;
    cin >> n;

    ll mn, mx;

    if(n < 4 || n%2 == 1) {
        cout << -1 << endl;
        return;
    }
    else{
        
        mn = (n+6-1)/6;
        mx = (n)/4;

    }

    cout << mn << " " << mx << endl;

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