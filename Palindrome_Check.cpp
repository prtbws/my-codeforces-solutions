#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int l = 0;
    int r = n-1;

    while(l <= r){

        if(a[l] == a[r]){
            l++;
            r--;
        }
        else if(a[l] == k) l++;
        else if(a[r] == k) r--;

        else {
            cout << "No" << endl;
            return;
        }

    }
    cout << "Yes" << endl;
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