#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;

    int cnt1 = 0, cnt0 = 0;

    for(int i=0; i<s.size(); i++){

        if(s[i] == '0') cnt0++;
        else cnt1 ++;
    }
    int check = min(cnt1, cnt0);

    if(check%2 == 1) cout << "DA" << endl;
    else cout << "NET" << endl;
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