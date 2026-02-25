#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m,d;
    cin >> n >> m >> d;

    int maxcap = (d/m)+1;
    int mintower = (n+maxcap-1)/maxcap;

    cout << mintower << endl;
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