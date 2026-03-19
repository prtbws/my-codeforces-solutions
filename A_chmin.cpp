#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]<x){
            cout << 1 << endl;
            x = a[i];
        }
        else cout << 0 << endl;
    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}