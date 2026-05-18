#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >>k;

    vector<int>a(n);
    vector<pair<int,int>>ans;
    for(int i=0; i<n; i++) {

        cin >> a[i];

        int rem = a[i]%k;
        if(rem==0) rem = k;

        ans.push_back({rem, i+1});
    }

    sort(ans.begin(), ans.end(), [](auto &a, auto &b){
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });

    for(auto &x : ans){
        cout << x.second << " ";
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