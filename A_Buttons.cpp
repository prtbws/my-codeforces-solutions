#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    if(b>a) cout << "Second" << endl;
    else if(a>b) cout << "First" << endl;
    else{
        if(c%2 == 1) cout << "First" << endl;
        else cout << "Second" << endl;
    }
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