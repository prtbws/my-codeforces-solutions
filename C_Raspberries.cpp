#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);

    int cnte = 0;
    int ans = INT_MAX;

    for(int i=0; i<n; i++){
       cin >> a[i];
       if(a[i]%2 == 0) cnte++;

       ans = min(ans, (k - a[i]%k)%k);
    }
    if(k == 4){

        if(cnte > 1) ans = min(0,ans);
        else if(cnte == 1) ans = min(1,ans);
        else if(cnte == 0) ans = min(2,ans);
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