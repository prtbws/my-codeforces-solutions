#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x,y,z;

    cin >> x >> y >> z;

    int c = 0;

    if(x > 49) c++;
    if(y > 49) c++;
    if (z > 49) c++;

    if(c>1) cout << "Yes" << endl;
    else cout << "No" << endl;
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