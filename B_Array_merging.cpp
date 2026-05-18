#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
   
    vector<ll>a(n), b(n);

    unordered_map<ll,int>cnta, cntb;

    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }    
    for(int i = 0; i<n; i++) {
        cin >> b[i];
    }  
    
    for(int i=0; i<n; ){
        int j = i;

        while(j < n && a[i] == a[j]) j++;

        cnta[a[i]] = max(cnta[a[i]], j-i);

        i=j;
    }

    for(int i=0; i<n; ){
        int j = i;

        while(j < n && b[i] == b[j]) j++;

        cntb[b[i]] = max(cntb[b[i]], j-i);

        i=j;
    }

    int ans = 0;

    for(int x = 1; x <= 2*n; x++){

        ans = max(ans, cnta[x]+cntb[x]);
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