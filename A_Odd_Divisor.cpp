#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;

    ll q = n;
    while(q>1){

        if(q%2 == 0) q/=2;
        else{
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

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