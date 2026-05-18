#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    ll x,n;
    cin >> x >> n;

    if(x % 2 == 0){

        if(n%4 == 1) x -= n;
        else if(n%4 == 2) x += 1;
        else if(n%4 == 3) x += n+1;

    }
    else{
        if(n%4 == 1) x += n;
        else if(n%4 == 2) x -= 1;
        else if(n%4 == 3) x -= n+1;

    }

    cout << x << endl;
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