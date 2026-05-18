#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);

    for(int i=0; i<n; i++){
       cin >> a[i];
    }


    for(int j=1; j<n-1; j++){

        int i = -1, k = -1;

        for(int l =0; l<j; l++){
            if(a[l] < a[j]){
                i = l;
                break;
            }

        }
        for(int r = j+1; r<n; r++){
            if(a[r] < a[j]){
                k = r;
                break;
            }
        }
        if(i != -1 && k != -1){
            cout << "YES" << endl;
            cout << i+1 << " " << j+1 << " " << k+1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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