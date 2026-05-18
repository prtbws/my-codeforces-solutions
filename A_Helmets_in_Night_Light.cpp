#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n, p;
    cin >> n >> p;

    vector<ll>a(n);
    vector<ll>b(n);
    vector<pair<ll , ll>> v(n);

    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) {
        cin >> b[i];

        v[i] = {b[i], a[i]};

    }

    sort(v.begin(), v.end());
    ll mincost = p;
    ll informed = 1;

    for(auto idx : v){

        if(idx.first >= p) break;

        if(informed + idx.second > n){
            mincost += (n-informed)*idx.first;
            informed = n;
            break;
        }
        else{

            mincost += idx.second * idx.first;
            informed += idx.second;
        }
    }

    mincost += (n-informed) * p;
    cout << mincost << endl;
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