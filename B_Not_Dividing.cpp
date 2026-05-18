#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n;i++){
        cin >> a[i];
    }

    for(int i = 0; i<n-1; i++) {

        if(a[i] == 1) a[i]++;

        if(a[i+1]%a[i] == 0) a[i+1]++;
    }
    for(int i = 0; i<n-1; i++) {

        if(a[i+1]%a[i] == 0) a[i+1]++;
    }
    for(int i=0; i<n; i++) cout << a[i] << " ";

    cout << endl;
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