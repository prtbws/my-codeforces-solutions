#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;

    cin >> a >> b;

    if( a== b){
        cout << 0 << endl;
        return;
    }
    ll ans = 0;

    ll big = max(a,b);
    ll small = min(a,b);

    ll check=  big/small;

    if(big%small != 0){
        cout << -1 << endl;
        return;
    }

    if(check & (check-1)){
        cout << -1 << endl;
        return;
    }

    while(check/8 > 0){

        ans++;
        check /= 8;
    }while(check/4 > 0){

        ans++;
        check /= 4;
    }
    while(check/2 > 0){

        ans++;
        check /= 2;
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