#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,x;
    cin >>n >> x;

    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    string s;
    cin >> s;

    ll ans = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){

            int c = 0;

            for(int k = 0; k<n; k++){

                if(a[k] < min(a[i], a[j]) || a[k] > max(a[i], a[j])){

                    if(s[k] == '1') c++;
                }
                
            }
            if(s[i] == '0')c++;

            if(i != j && s[j] == '0') c++;

            ll coins = min(a[i], a[j]) * max(a[i], a[j]) - c*x*1LL;
            ans = max(ans, coins);

        }
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