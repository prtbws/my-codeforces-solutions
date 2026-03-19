#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;

    int dig = 0;
    int t = 1;

    while(n/t != 0){
        dig++;
        t *= 10;
    }
    
    cout << (dig-1)*9 + n*10/t << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}