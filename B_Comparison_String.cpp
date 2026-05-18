#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int len1 = 1, len2 = 1;

    for(int i=1; i<n; i++){

        if(s[i-1] == s[i]) len1++;
        else len1 =1;

        len2 = max(len1, len2);
    }
    cout << len2 + 1 << endl;
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