#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;
    vector<ll>freq(26,0);

    for(int i=0; i<n; i++) freq[s[i]-'a']++;

    ll oddfreq = 0;
    for(int i=0; i<26; i++){
        oddfreq += freq[i]%2;
    }

    if(oddfreq > k+1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}