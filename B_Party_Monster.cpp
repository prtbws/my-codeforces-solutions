#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int dep = 0;

    for(int i=0; i<n; i++){

        if(s[i] == '(') dep++;
        else dep--;
    }
    if(dep == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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