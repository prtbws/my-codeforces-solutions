#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,q;
    cin >> n >> q;

    vector<int>a(n);
    vector<int>aa(n);

    for(int i=0; i<n; i++){

        cin >> a[i];
        
    }

    aa = a;

    for(int i=0; i<q; i++){

        int b;
        cin >> b;
        
        int ans=INT_MAX;

        while(b--){

            int ball;

            cin >> ball;
            aa[ball-1]= INT_MAX;
        }
        for(int i=0; i<n; i++){
            ans = min(ans, aa[i]);
        }
        cout << ans << endl;

        aa = a;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    return 0;
}