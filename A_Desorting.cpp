#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;
    vector<ll>a(n);

    for(int i=0; i<n ; i++){

        cin >> a[i];
    }
    ll mind = LLONG_MAX;
    for(int i= 0; i<n-1; i++){
        if(a[i+1] >= a[i]) mind = min(mind, a[i+1]- a[i]);
        else mind = -2;
    }
    cout << mind/2 + 1 << endl;
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