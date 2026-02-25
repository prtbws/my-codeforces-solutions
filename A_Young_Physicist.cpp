#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;
    int a[n][3];
    int sum[3] = {0};

    for(int i=0; i<n; i++){

        for(int j=0; j<3; j++){
            cin >> a[i][j];
            sum[j] += a[i][j];
        }
    }
    if(sum[0] == 0 && sum[1] == 0 && sum[2] == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}