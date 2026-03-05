#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;

    if(a+b+2 <= n || (a==b) && (a==n)) cout << "Yes" << endl;
    else cout << "No" << endl;
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