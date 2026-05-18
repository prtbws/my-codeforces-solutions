#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;

    vector<int >a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int ans = a[n-1] - a[0];

    for(int i=0; i<n-1; i++){
        ans = max(ans, a[n-1] - a[i]);
    }
    for(int i=1; i<n; i++){
        ans = max(ans, a[i] - a[0]);
    }
    for(int i=0; i<n-1; i++){
        ans = max(ans, a[i] - a[i+1]);
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