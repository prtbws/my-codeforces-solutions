#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i=0;

    while(i+1 < s.length()){

        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
        }
        else i++;
    }
    if(s.length() == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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