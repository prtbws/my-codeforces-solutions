#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int >c(m);
    for(int i=0 ; i<m; i++) cin >> c[i];

    int ans = 0;

    for(int i=0; i<n; i++){

        int a,b;
        cin >> a >> b;

        ans += min(b,c[a-1]);
        c[a-1] -= min(b, c[a-1]);
        
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
        solve();
    

    return 0;
}