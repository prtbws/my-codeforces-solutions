#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int >a(n);
    vector<int >freq(n+1, 0);

    for(int i =0; i <n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }

    int miss = 0;

    for(int k=  0; k<=n ; k++){

        if(k > 0 && freq[k-1] == 0){
            miss++;
        }

        if(miss == 0) cout << freq[k] << " ";
        else cout << max(miss, freq[k]) << " ";
    }
    cout << endl;

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