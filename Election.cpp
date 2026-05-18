#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n, k;
    cin >> n >> k;

    if(k > n/2) cout << 0 << endl;
    else cout << (n/2)-k+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();

    return 0;
}