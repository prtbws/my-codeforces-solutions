#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n, q;
    cin >> n >> q;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> pfx(n+1, 0);
    for(int i=0; i<n; i++){
        pfx[i+1] = pfx[i] + a[i]%2;
    }



    while(q--){
        int l, r , k;
        cin >> l >> r >> k;

        l--, r--;

        ll odd = 0;

        odd += pfx[l];
        odd += pfx[n] - pfx[r+1];

        if(k % 2 == 1){
            odd += (r - l + 1);
        }
        if(odd % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
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