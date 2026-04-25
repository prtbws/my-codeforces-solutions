#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    int ans = 0;

    for (int i = 0; i<n; i++){
        int cl = 0, cr = 0;

        for(int j=0; j<i; j++){
            if(p[j] < p[i]) cl++;
        }

        for(int j = i+1; j<n; j++) {
            if(p[j] > p[i]) cr++;
        }
        if(cl == cr) ans++;
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