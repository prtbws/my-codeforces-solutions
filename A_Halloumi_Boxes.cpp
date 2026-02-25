#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<long long>a(n);
    
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<long long> ca = a;
        sort(ca.begin(), ca.end());

        if(ca == a || k>1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}