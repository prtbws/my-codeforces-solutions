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
        vector<int>b(n);
        vector<int>ans;
        cin >> b[0];
        ans.push_back(b[0]);
        
        for(int i=1; i<n; i++){
            cin >> b[i];
            if(b[i]<b[i-1]){
                ans.push_back(b[i]);
            }
            ans.push_back(b[i]);
        }
        
        cout << ans.size() << endl;
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;

    }

    return 0;
}