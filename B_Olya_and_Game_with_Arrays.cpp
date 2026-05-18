#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n; 
    cin >> n;

    vector<int>min1(n), min2(n);

    for(int i =0; i<n; i++){
        int m;
        cin >> m;

        
        vector<int>a(m);
        for(int j=0; j<m; j++) cin >> a[j];
        
        sort(a.begin(), a.end());

        min1[i] = a[0];
        min2[i] = a[1];

    }

    ll gmin = *min_element(min1.begin(), min1.end());

    ll sum = 0;

    for(auto x : min2) sum += x;

    ll gmin2 = *min_element(min2.begin(), min2.end());

    cout << sum - gmin2 + gmin << endl;
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