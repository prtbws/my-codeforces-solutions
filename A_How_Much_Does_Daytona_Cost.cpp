#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int>a(n);

    for(int i =0 ; i<n; i++) cin >> a[i];

    for(int i =0; i<n; i++){
        if(a[i] == k){
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