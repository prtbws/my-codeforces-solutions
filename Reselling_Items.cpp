#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    ll pro = 0;
    for(int i=0; i<n; i++){

        int cost = (i<k) ? 5:10;

        if(a[i] > cost) pro += a[i]-cost;

        else break;
    }
    cout << pro << endl;
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