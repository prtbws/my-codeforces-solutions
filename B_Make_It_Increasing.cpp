#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;

    vector<ll>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll ans = 0;

    for(int i = n-2; i >=0; i--){
        
        while(a[i] >= a[i+1]){
            a[i] /= 2;
            ans++;

            if(a[i] == 0){
                break;
            }
        }
        if(a[i] == 0 && a[i+1] == 0){
            ans = -1;
            break;
        }
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