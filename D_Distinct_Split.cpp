#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n;
    cin >> n ;

    string s;
    cin >> s;

    vector<int>lc(26,0), rc(26,0);
    vector<int>pre(n,0), suf(n,0);


    for(int i=0; i<n; i++){

        if(lc[s[i]-'a'] == 0) pre[i]++;

        lc[s[i]-'a']++;

        if(i > 0) pre[i] += pre[i-1];
    }

    for(int i=n-1; i>=0; i--){

        if(rc[s[i]-'a'] == 0) suf[i]++;

        rc[s[i]-'a']++;

        if(i<n-1) suf[i] += suf[i+1];
    }

    int ans = 0;

    for(int i=0; i<n-1; i++){
        ans = max(ans, pre[i]+suf[i+1]);
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