#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int i=0;
    while(a[i % n] > i){
        i++;
    }
    
    cout << i%n +1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}