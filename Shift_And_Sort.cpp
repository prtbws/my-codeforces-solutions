#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    bool ans = true;

    for(int i=0; i<n-2; i++){
        if (a[i] > a[i+1] and a[i+1] > a[i+2])
            ans = false;
    }

    if(ans){
        vector<int> b;

        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]) b.push_back(i);
        }

        for(int y=0; y<b.size(); y++){
            int i = b[y];
            int x = (a[i] - a[i+1] + 1) / 2;
            a[i] -= x;
            a[i+1] += x;
        }

        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]) ans = false;
        }
    }

    cout << (ans ? "Yes\n" : "No\n");
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