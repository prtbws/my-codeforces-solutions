#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int>a(n);
        int count = 0;
        int ans = 0;

        for(int i = 0; i<n; i++){

            cin >> a[i];

            if(a[i] == 0){
                count++;
            }
            else{

                ans = max(ans, count);
                count = 0;
            }
        }

        if(a[n-1] == 0){
            ans = max(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}