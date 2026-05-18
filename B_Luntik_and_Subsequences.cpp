#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    ll z = 0, o = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0) z++;
        else if(a[i] == 1) o++;
    }
    
    for(int i = 0; i<z; i++){
        o *= 2;
    }

    cout << o << endl;
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