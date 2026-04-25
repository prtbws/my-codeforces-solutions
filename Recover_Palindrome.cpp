#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = n-1;

    while(l<=r){

        if(s[l] == '?' && s[r]=='?'){
            cout << "NO" << endl;
            return;
            
        }
        l++;
        r--;
    }
    cout << "YES" << endl;

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