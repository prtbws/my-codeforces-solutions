#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    string s;
    cin >> s;

    if(s[0] != s[s.size()-1]) s[0] = s[s.size()-1];

    cout << s << endl;
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