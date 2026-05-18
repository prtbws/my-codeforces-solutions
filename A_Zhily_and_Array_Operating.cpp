#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<ll>a(n), b(n);
    for(int i=0; i<n ;i++) cin >> a[i];

    b[n-1] = a[n-1];
    int ans = (b[n-1] > 0);

    for(int i = n-2; i>=0; i--){
        b[i] = a[i]+ max(0LL, b[i+1]);

        if(b[i] > 0)ans++;
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