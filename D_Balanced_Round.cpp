#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int cnt = 1;
    int llen = 1;

    for(int i=1; i<n ;i++){
        if(abs(a[i-1]-a[i]) <= k) cnt++;
        else 
            cnt = 1;
        llen = max(llen, cnt);
        
    }

    cout << n-llen << endl;
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