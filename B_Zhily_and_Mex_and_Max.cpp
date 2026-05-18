#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){

    int n;
    cin >> n;

    vector<ll>a(n);
    map<ll, int>freq;

    ll mx = -1;

    for(int i= 0; i<n; i++){
        cin >> a[i];
        freq[a[i]]++;
        mx = max(mx, a[i]);
    }
    vector<ll>b;

    b.push_back(mx);
    freq[mx]--;

    for(auto &x : freq){

        if(x.second > 0) {
            b.push_back(x.first);
            x.second--;
        }
    }

    for(auto & x: freq){
        while(x.second--){
            b.push_back(x.first);
        }
    }

    ll ans= 0;
    ll mex = 0;
    ll cmax = 0;

    vector<int>seen(n+5, 0);

    for(int i=0; i<n; i++){

        
        cmax = max(cmax, b[i]);

        if(b[i] <= n){
            seen[b[i]] = 1;
        }

        while(seen[mex]){
            mex++;
        }
        
        ans += cmax+mex;
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