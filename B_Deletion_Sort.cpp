#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    int count = 1;

    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for (int i=1; i<n; i++){

        if(a[i]>=a[i-1]){
            count++;
        }
        else{
            count = 1;
            break;
        }
    }
    cout << count << endl;
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