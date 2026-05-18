#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n , k, q;
    cin >> n >> k >> q;

    vector<int>a(n);
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
    ll ans = 0;
    ll count = 0;
    for(int i=0; i<n; i++){

        if(a[i] <= q){
            count++;
        }
        else{
            if(count >= k){
                ans += ((count-k+1)*(count-k+2))/2;
            }
            count = 0;
        }
    }
    if(count >= k){
        ans += ((count-k+1)*(count-k+2))/2;
        count = 0;
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