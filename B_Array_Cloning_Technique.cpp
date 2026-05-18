#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int >a(n);
    map<int, int>mp;
    for(int i=0; i<n ;i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int opp = 0;
    int mf = 0;

    for(auto i : mp){
        mf = max(mf, i.second);
    }

    while(mf < n){

        opp++;
        opp += mf;
        mf *= 2;
    }
    if(mf > n) opp -= mf-n;

    cout << opp << endl;
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