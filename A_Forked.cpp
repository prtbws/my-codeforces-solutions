#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int a,b;
    cin >> a >> b;

    int xk,yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    vector<pair<int , int>> posk(8);
    vector<pair<int, int>> posq(8);

    posk[0].first = xk +  a, posk[0].second = yk + b;
    posk[1].first = xk +  a, posk[1].second = yk - b;
    posk[2].first = xk -  a, posk[2].second = yk + b;
    posk[3].first = xk -  a, posk[3].second = yk - b;
    posk[4].first = xk +  b, posk[4].second = yk + a;
    posk[5].first = xk +  b, posk[5].second = yk - a;
    posk[6].first = xk -  b, posk[6].second = yk + a;
    posk[7].first = xk -  b, posk[7].second = yk - a;

    posq[0].first = xq +  a, posq[0].second = yq + b;
    posq[1].first = xq +  a, posq[1].second = yq - b;
    posq[2].first = xq -  a, posq[2].second = yq + b;
    posq[3].first = xq -  a, posq[3].second = yq - b;
    posq[4].first = xq +  b, posq[4].second = yq + a;
    posq[5].first = xq +  b, posq[5].second = yq - a;
    posq[6].first = xq -  b, posq[6].second = yq + a;
    posq[7].first = xq -  b, posq[7].second = yq - a;

    set<pair<int,int>> sk(posk.begin(), posk.end());
    set<pair<int,int>> sq(posq.begin(), posq.end());

    int ans = 0;

    for(auto p : sk){
        if(sq.count(p)) ans++;
    }

    cout << ans << '\n';
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