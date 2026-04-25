#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;

    vector<int>a(n);
    int txor = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        txor ^= a[i];
    }

    if(n%2 == 1) cout << txor << endl;
    else{
        if(txor == 0) cout << txor << endl;
        else cout << -1 << endl;
    }
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