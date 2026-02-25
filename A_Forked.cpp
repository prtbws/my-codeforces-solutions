#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    ll a,b;
    cin >> a >> b;

    ll xk,yk;
    cin >> xk >> yk;
    
    ll xq, yq;
    cin >> xq >> yq;

    vector<pair<ll,ll>> moves = {
        {a,b}, {a,-b}, {-a,b},{-a,-b},
        {b,a},{b,-a},{-b,a},{-b,-a}
    };

    set<pair<ll,ll>> kingSquares;

    for(auto m : moves){
        kingSquares.insert({xk + m.first, yk + m.second});
    }

    int ans = 0;

    for(auto m : moves){
        pair<ll,ll> pos = {xq + m.first, yq + m.second};

        if(kingSquares.count(pos))
            ans++;
    }

    cout << ans << '\n';
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