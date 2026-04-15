#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    int sum  = 0;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());


    if(a[0] == a[n-1]) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << a[n-1] << " ";
        for(int i=0; i<n-1; i++) cout << a[i] << " ";
        cout << endl;
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