#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    int count2 = 0;

    for(int i=0; i<n; i++){

        cin >> a[i];
        if(a[i]==2) count2++;
    }
    if(count2%2 != 0) cout << -1 << endl;
    else if(count2 == 0) cout << 1 << endl;
    else{
        int pcount = 0;

        for(int i=0; i<n; i++){
            if(a[i]==2) pcount++;
            if(pcount == count2/2){
                cout << i+1 << endl;
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}