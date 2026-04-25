#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
        cin >> n;

        int check = -1;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];

            
        }
        for(int i=1; i<n; i++){
            if(a[i]< a[0]){
                cout << "NO" << endl;
                return;
            }

        }
        cout << "YES" << endl;
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