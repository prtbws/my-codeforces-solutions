#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b,c,d;

    cin >> a >> b >> c >> d;

    if(d < b || d-b < c-a){
        cout << "-1" << endl;
    }
    else{
        cout << a+2*(d-b)-c << endl;
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